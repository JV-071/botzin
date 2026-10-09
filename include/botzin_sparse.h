#ifndef BOTZIN_SPARSE_H
#define BOTZIN_SPARSE_H
#include <stddef.h>
#include <stdint.h>
enum { BOTZIN_OK = 0, BOTZIN_INVALID = 1, BOTZIN_TRUNCATED = 2, BOTZIN_RANGE = 3 };
int botzin_sparse_decode(const uint8_t *input, size_t input_size, uint8_t *output, size_t output_size);
int botzin_sparse_encode(const uint8_t *input, size_t input_size, uint8_t *output, size_t capacity, size_t *written);
#endif
