#include "magic.h"
#include <stdlib.h>

int calculate_magic_sum() {
    const int result = MAGIC_SIZE * (MAGIC_SIZE * MAGIC_SIZE + 1) / 2;
    return result;
}

int is_magic_square(int matrix[MAGIC_SIZE][MAGIC_SIZE]) {
    const int magic_sum = calculate_magic_sum();
    int main_diagonal = 0;
    int secondary_diagonal = 0;
    int i,j;

    int *existing_values = calloc(MAGIC_SIZE * MAGIC_SIZE + 1, sizeof(int));
    for (i = 0; i < MAGIC_SIZE; i++) {
        int row_sum = 0;
        int column_sum = 0;
        for (j = 0; j < MAGIC_SIZE; j++) {
            int row_value = matrix[i][j];
            int column_value = matrix[j][i];

            if (validate_number_in_range(row_value) != 0 || existing_values[row_value] != 0) {
                free(existing_values);
                return 1;
            }
            existing_values[row_value]++;
            row_sum += row_value;
            column_sum += column_value;
            if (i == j) {
                main_diagonal += row_value;
            }
            if (i + j == MAGIC_SIZE - 1) {
                secondary_diagonal += row_value;
            }

        }
        if (row_sum != magic_sum || column_sum != magic_sum) {
            free(existing_values);
            return 1;
        }

    }
    free(existing_values);
    if (main_diagonal != magic_sum || secondary_diagonal != magic_sum) {
        return 1;
    }

    return 0;
}



