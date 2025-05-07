#include <stdio.h>
#include "magic.h"
#include <stdlib.h>
#include "limits.h"
#include <errno.h>

int is_valid_int(const char *input) {
    char *left_over_part;
    long value;
    errno = 0;
    value = strtol(input, &left_over_part, 10);
    if (input == left_over_part || *left_over_part != '\0') {
        return 1;
    }
    if (errno == ERANGE || value > INT_MAX || value < INT_MIN){
        return 1;
    }

    return 0;
}


int validate_values_size(const int count) {
    if (count < MATRIX_NUMBER_VALUES) {
        fprintf(stdout, "Not enough values. Expected %d, got %d\n", MATRIX_NUMBER_VALUES, count);
        return 1;
    }
    if (count > MATRIX_NUMBER_VALUES) {
        fprintf(stdout, "Too many values. Expected %d, got %d\n", MATRIX_NUMBER_VALUES, count);
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