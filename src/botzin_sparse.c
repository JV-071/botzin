#include "botzin_sparse.h"
#include <string.h>
static const uint8_t magic[4] = {0xa0, 0xfe, 0xff, 0xff};
int botzin_sparse_decode(const uint8_t *input, size_t input_size, uint8_t *output, size_t output_size) {
    size_t src = 4, dst = 0;
    if ((!input && input_size) || (!output && output_size)) return BOTZIN_INVALID;
    if (input_size < 4 || memcmp(input, magic, 4)) {
        if (input_size != output_size) return BOTZIN_INVALID;
        if (input_size) memcpy(output, input, input_size);
        return BOTZIN_OK;
    }
    if (output_size) memset(output, 0, output_size);
    while (src < input_size) {
        const uint8_t token = input[src++];
        const unsigned kind = token >> 6;
        size_t skip = token & 63u, count;
        if (kind == 3) {
            if (src == input_size) return BOTZIN_TRUNCATED;
            skip = (skip << 8) | input[src++];
            if (skip > output_size - dst) return BOTZIN_RANGE;
            dst += skip;
            continue;
        }
        count = (size_t)1 << kind;
        if (count > input_size - src) return BOTZIN_TRUNCATED;
        if (skip > output_size - dst) return BOTZIN_RANGE;
        dst += skip;
        if (kind == 0 && input[src] == 0)
            return src + 1 == input_size ? BOTZIN_OK : BOTZIN_INVALID;
        if (count > output_size - dst) return BOTZIN_RANGE;
        memcpy(output + dst, input + src, count);
        dst += count;
        src += count;
    }
    /* A zero-initialized input allocation supplies the implicit EOF terminator. */
    return BOTZIN_OK;
}
static int emit(uint8_t *output, size_t capacity, size_t *position, uint8_t a, uint8_t b) {
    if (*position > capacity || capacity - *position < 2) return BOTZIN_RANGE;
    output[(*position)++] = a;
    output[(*position)++] = b;
    return BOTZIN_OK;
}
int botzin_sparse_encode(const uint8_t *input, size_t input_size, uint8_t *output, size_t capacity, size_t *written) {
    size_t src = 0, dst = 4;
    if (!written || !output || (!input && input_size)) return BOTZIN_INVALID;
    *written = 0;
    if (capacity < 4) return BOTZIN_RANGE;
    memcpy(output, magic, 4);
    while (src < input_size) {
        const size_t start = src;
        size_t skip;
        while (src < input_size && input[src] == 0) ++src;
        skip = src - start;
        while (skip >= 64) {
            const size_t chunk = skip > 16383 ? 16383 : skip;
            if (emit(output, capacity, &dst, (uint8_t)(0xc0u | (chunk >> 8)), (uint8_t)chunk)) return BOTZIN_RANGE;
            skip -= chunk;
        }
        if (src == input_size) {
            if (emit(output, capacity, &dst, (uint8_t)skip, 0)) return BOTZIN_RANGE;
            *written = dst;
            return BOTZIN_OK;
        }
        if (emit(output, capacity, &dst, (uint8_t)skip, input[src++])) return BOTZIN_RANGE;
    }
    if (emit(output, capacity, &dst, 0, 0)) return BOTZIN_RANGE;
    *written = dst;
    return BOTZIN_OK;
}
