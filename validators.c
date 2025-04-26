#include <stdio.h>
#include "magic.h"
#include <stdlib.h>


int is_valid_int(const char *str) {
    char *non_digit_part;
    long actual_value;
    errno = 0;
    actual_value = strtol(str, &non_digit_part, 10);

    return errno == 0 &&
           *non_digit_part == '\0' &&
           actual_value >= INT_MIN &&
           actual_value <= INT_MAX;
}


int validate_values_size(const int count) {
    if (count < MATRIX_NUMBER_VALUES) {
        fprintf(stderr, "Not enough values. Expected %d, got %d\n", MATRIX_NUMBER_VALUES, count);
        return 1;
    }
    if (count > MATRIX_NUMBER_VALUES) {
        fprintf(stderr, "Too many values. Expected %d, got %d\n", MATRIX_NUMBER_VALUES, count);
        return 1;
    }
    return 0;
}

int validate_number_in_range(const int value) {
    if (value < 1 || value > MAGIC_SIZE*MAGIC_SIZE) {
        return 1;
    }
    return 0;
}