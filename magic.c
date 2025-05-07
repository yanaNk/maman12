#include <stdio.h>
#include "magic.h"

/* Description:
 * user enters input and the function print the matrix and whenever it is magic square
 */
int main() {
    int matrix[MAGIC_SIZE][MAGIC_SIZE];
    printf("Please enter %d numbers \n",MATRIX_NUMBER_VALUES);
    if (read_values_from_input(matrix) == 0) {
        printf("Matrix passed successfully: \n");
        print_matrix(matrix);
        if (is_magic_square(matrix) == 0) {
            printf("It is a magic square\n");
        }
        else {
            printf("It is not a magic square\n");
        }
        return 0;
    }
    return 1;
}