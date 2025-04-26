
#define MAGIC_SIZE 3 /* Size of the magic square matrix */
/* Total number of values*/
#define MATRIX_NUMBER_VALUES MAGIC_SIZE*MAGIC_SIZE

/*
 * Function: read_values_from_input
 * Description:
 *  read values from stdin (keyboard or file
 *  params: 2D array that will represent the matrix
 *  returns: 0 if input is valid otherwise 1 with relevant print error
 */
int read_values_from_input(int matrix[MAGIC_SIZE][MAGIC_SIZE]);
/*
 * Function: print_matrix
 * Description:
 *  Prints matrix values on the screen
 */
void print_matrix(int matrix[MAGIC_SIZE][MAGIC_SIZE]);
/*
 * Function: calculate_magic_sum
 * Description:
 *  Calculates the expected magic sum for a magic square of size MAGIC_SIZE.
 *
 * returns: the expected sum for each row, column, and diagonal.
 */
int calculate_magic_sum();
/*
 * Function: validate_values_size
 * Description:
 *  Validates if the number of input values matches the expected number.
 *
 * params :
 *  count: number of values read from input.
 *
 * returns: 0 if the count is correct, 1 otherwise.
 */
int validate_values_size(int count);

/*
 * Function: validate_number_in_range
 * ----------------------------------
 * Description:
 *  Validates if a number is within the valid range [1, MAGIC_SIZE * MAGIC_SIZE].
 *
 * params: number: the number to validate.
 *
 * returns: 0 if the number is valid, 1 otherwise.
 */
int validate_number_in_range(int number);

/*
 * Function: is_valid_int
 * Description:
 *  Checks if the given integer value is within the valid range of int type.
 *
 * value: the integer to check.
 *
 * returns: 0 if valid, 1 otherwise.
 */
int is_valid_int(int value);

/*
 * Function: is_magic_square
 * Description:
 *  Checks if a given matrix is a valid magic square.
 *
 * params: matrix: 2D array to check.
 *
 * returns: 0 if it is a magic square, 1 otherwise.
 */
int is_magic_square(int matrix[MAGIC_SIZE][MAGIC_SIZE]);