#include "botzin_sparse.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CHECK(x) do { if (!(x)) { fprintf(stderr, "check failed at line %d: %s\n", __LINE__, #x); return 1; } } while (0)
static uint8_t *read_file(const char *path, size_t *size) {
    FILE *file = fopen(path, "rb");
    long length;
    uint8_t *data;
    if (!file || fseek(file, 0, SEEK_END)) { if (file) fclose(file); return NULL; }
    length = ftell(file);
    if (length < 0 || length > 3000000 || fseek(file, 0, SEEK_SET)) { fclose(file); return NULL; }
    *size = (size_t)length;
    data = (uint8_t *)malloc(*size ? *size : 1);
    if (!data || fread(data, 1, *size, file) != *size) { free(data); fclose(file); return NULL; }
    fclose(file);
    return data;
}
static int fixture(const char *folder, const char *packed_name, const char *raw_name, size_t expected_size) {
    char path[1024];
    size_t packed_size, raw_size, written;
    uint8_t *packed, *raw, *decoded, *encoded;
    snprintf(path, sizeof path, "%s/%s", folder, packed_name);
    packed = read_file(path, &packed_size);
    CHECK(packed != NULL);
    snprintf(path, sizeof path, "%s/%s", folder, raw_name);
    raw = read_file(path, &raw_size);
    CHECK(raw != NULL && raw_size == expected_size);
    decoded = (uint8_t *)malloc(raw_size);
    encoded = (uint8_t *)malloc(raw_size * 2 + 6);
    CHECK(decoded != NULL && encoded != NULL);
    CHECK(botzin_sparse_decode(packed, packed_size, decoded, raw_size) == BOTZIN_OK);
    CHECK(memcmp(decoded, raw, raw_size) == 0);
    CHECK(botzin_sparse_encode(raw, raw_size, encoded, raw_size * 2 + 6, &written) == BOTZIN_OK);
    CHECK(botzin_sparse_decode(encoded, written, decoded, raw_size) == BOTZIN_OK);
    CHECK(memcmp(decoded, raw, raw_size) == 0);
    printf("fixture %s: %zu bytes verified\n", packed_name, raw_size);
    free(packed); free(raw); free(decoded); free(encoded);
    return 0;
}
int main(int argc, char **argv) {
    const uint8_t literals[] = {0xa0,0xfe,0xff,0xff,0x80,'A','B','C','D',0x40,'E','F',0,'G',0,0};
    const uint8_t truncated[] = {0xa0,0xfe,0xff,0xff,0x80,'A'};
    const uint8_t oversized[] = {0xa0,0xfe,0xff,0xff,0xff,0xff};
    uint8_t small[16], encoded[64], result[16];
    size_t written;
    CHECK(argc == 2);
    CHECK(botzin_sparse_decode(literals, sizeof literals, small, 7) == BOTZIN_OK);
    CHECK(memcmp(small, "ABCDEFG", 7) == 0);
    CHECK(botzin_sparse_decode(truncated, sizeof truncated, small, sizeof small) == BOTZIN_TRUNCATED);
    CHECK(botzin_sparse_decode(oversized, sizeof oversized, small, sizeof small) == BOTZIN_RANGE);
    CHECK(botzin_sparse_decode(literals, sizeof literals, small, 3) == BOTZIN_RANGE);
    memset(small, 0, sizeof small); small[0] = 1; small[15] = 255;
    CHECK(botzin_sparse_encode(small, sizeof small, encoded, sizeof encoded, &written) == BOTZIN_OK);
    CHECK(botzin_sparse_decode(encoded, written, result, sizeof result) == BOTZIN_OK);
    CHECK(memcmp(result, small, sizeof small) == 0);
    CHECK(botzin_sparse_encode(small, sizeof small, encoded, 4, &written) == BOTZIN_RANGE);
    CHECK(botzin_sparse_encode(NULL, 0, encoded, sizeof encoded, &written) == BOTZIN_OK);
    CHECK(botzin_sparse_decode(encoded, written, NULL, 0) == BOTZIN_OK);
    CHECK(fixture(argv[1], "targets.bott", "targets.raw", 69677) == 0);
    CHECK(fixture(argv[1], "route.botc", "route.raw", 659603) == 0);
    puts("Botzin sparse format tests passed");
    return 0;
}
