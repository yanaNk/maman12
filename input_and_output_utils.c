#include <stdio.h>
#include "magic.h"

int read_values_from_input(int matrix[MAGIC_SIZE][MAGIC_SIZE]) {
    int value;
    int count = 0;
    int scan_result = 0;
    while ((scan_result = scanf("%d", &value)) != EOF) {
        if (scan_result != 1  || !is_valid_int(value)) {
            printf("Invalid input was entered");
            return 1;
        }
        if (count < MATRIX_NUMBER_VALUES) {
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
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}