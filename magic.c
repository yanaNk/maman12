#include <stdio.h>
#include "magic.h"
#include "validators.c"



int read_values_from_input(int matrix[MAGIC_SIZE][MAGIC_SIZE]) {
    int i, j, value;
    int count = 0;
    char characters[100];
    for (i = 0; i < MAGIC_SIZE; i++) {
        for (j = 0; j < MAGIC_SIZE; j++) {
            if (scanf("%99s", characters) != 1) {
                return validate_values_size(count);
            }

            if (!is_valid_int(characters)) {
                printf("Not a valid input: %s\n", characters);
                return 1;
            }

            matrix[i][j] = value;
            count++;
        }
    }

    // Check for too many
    if (scanf("%99s", characters) == 1) {
        return validate_values_size(count + 1);
    }

    return validate_values_size(count); // should return 0 here
}

int main() {
    int matrix[MAGIC_SIZE][MAGIC_SIZE];
    int i, j;
    printf("Please enter %d numbers \n",MATRIX_NUMBER_VALUES);
    if (read_values_from_input(matrix) == 0) {
        printf("Matrix read successfully:\n");
        for (i = 0; i < MAGIC_SIZE; i++) {
            for (j = 0; j < MAGIC_SIZE; j++) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}