#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "magic.h"

int read_values_from_input(int matrix[MAGIC_SIZE][MAGIC_SIZE]) {
    int value;
    int count = 0;
    char input[1000];
    while (scanf("%999s", input) == 1) {
        if (is_valid_int(input) == 1) {
            printf("Invalid input was entered\n");
            return 1;
        }
        if (count < MATRIX_NUMBER_VALUES) {
            value = strtol(input, NULL, 10);
            matrix[count / MAGIC_SIZE][count % MAGIC_SIZE] = value;
        }
        count++;
    }

    return validate_values_size(count);
}

void print_matrix(int matrix[MAGIC_SIZE][MAGIC_SIZE]) {
    int i, j;
    for (i = 0; i < MAGIC_SIZE; i++) {
        for (j = 0; j < MAGIC_SIZE; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}