#include <stdio.h>
#include "magic.h"
#include <stdlib.h>

int read_values_from_input(int matrix[MAGIC_SIZE][MAGIC_SIZE]) {
    int value;
    int count = 0;
    char characters[100];

    while (scanf("%99s", characters) != EOF) {
        printf("Scanned: %s\n", characters);
        if (!is_valid_int(characters)) {
            printf("Invalid input: %s\n", characters);
            return 1;
        }

        value = atoi(characters);
        matrix[count / MAGIC_SIZE][count % MAGIC_SIZE] = value;
        count++;
    }

    return validate_values_size(count);
}

void print_matrix(int matrix[MAGIC_SIZE][MAGIC_SIZE]) {
    int i, j;
    for (i = 0; i < MAGIC_SIZE; i++) {
        for (j = 0; j < MAGIC_SIZE; j++) {
            printf("%d", matrix[i][j]);
        }
    }
    printf("\n");
}
int main() {
    int matrix[MAGIC_SIZE][MAGIC_SIZE];
    printf("Please enter %d numbers \n",MATRIX_NUMBER_VALUES);
    if (read_values_from_input(matrix) == 0) {
        printf("Matrix read successfully:\n");
        print_matrix(matrix);
        if (is_magic_square(matrix) == 0) {
            printf("It is a magic square");
        }
        else {
            printf("It is not a magic square");
        }
        return 0;
    }
    return 1;
}