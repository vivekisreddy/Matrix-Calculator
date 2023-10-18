#include <stdio.h>
#include <stdlib.h>
#include "matrix_math.h" // includes the header file which uses the function prototypes 

/**********************************************************
 * Write a program that acts as a matrix calculator.
 * This program should read two 1xN matrices from files
 * and perform addition or subtraction. Your code must
 * span multiple files (at least 2 .c files), with a header
 * file and makefile and should be able to add to matrices
 * together and subtract one matrix from another.
 ***********************************************************/

int main(int argc, char *argv[]) // passes the command line arguments in the main to have the user input in the terminal
{
    Matrix *A; // declares Matrix A
    Matrix *B; // declares Matrix B

    char *user_File1 = argv[1]; // declares a character for stores argv[1] which represents the first intput file
    char *user_File2 = argv[2]; // declares a character for stores argv[1] which represents the first intput file

    A = read_Matrix(user_File1); // matrix A refers to the first input file
    B = read_Matrix(user_File2); // matrix B refers to the second input file

    char *type = argv[3]; // creates a character pointer to store the type (a for addition or s for subtraction)

    if (*type == 'a') // checks if the user typed a
    {
        add_matrix(A, B); // if user inputted a, then the add_matrix function is performed
    }
    else if (*type == 's') // checks if the user typed s
    {

        sub_matrix(A, B); // if the user inputted s, then the sub_matrix function is performed
    }
    else // if false
    {
        printf("Invalid input"); // the input is invalid
    }

    deleteMatrix(A); // deletes the matrix A
    deleteMatrix(B); // deletes the matrix B

    return 0; // checks to see if the program successfully executed
}