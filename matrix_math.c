#include <stdio.h>
#include <stdlib.h>
#include "matrix_math.h"

/*************************************************************
 *       Task:
 *             Opens the file the user inputs
 *             Reads the data from the file
 *             Allocates memory for the matrix
 *             Goes through a for-loop to find the values
 *             in the array
 *
 *      Input: filename of the input file
 *
 *      Returns: the matrix
 *
 *************************************************************/

// Function to read data from the the file that the user inputs
// The file has an array which has the data

Matrix *read_Matrix(char *filename)
{

    FILE *file = fopen(filename, "r"); // opens the file the user inputs and read it

    struct Matrix *make_matrix = malloc(sizeof(struct Matrix)); // allocates memory for matrix
    fscanf(file, "%d", &(make_matrix->size));                   // reads the size in the matrix

    make_matrix->data = malloc(make_matrix->size * sizeof(float)); // allocates memory for the size in the matrix

    for (int i = 0; i < make_matrix->size; i++)
    {                                                // loops through all of the sizes
        fscanf(file, "%f", &(make_matrix->data[i])); // reads the data
    }

    fclose(file);       // closes the file
    return make_matrix; // returns the matrix that is created
}

/***************************************************************
 *      Input:
 *            Matrix A
 *
 *      Task:
 *           Free the memory allocated for the data
 *           in Matrix A
 *           Frees the Matrix A
 *
 *      Returns: 0
 *               To check if the function executed
 *               successfully
 ****************************************************************/

int deleteMatrix(Matrix *A)
{
    free(A->data);
    free(A);
    return 0;
}

/****************************************************************
 *      Task: Creates another matrix and performs the addition of 
 *            the two matrixes
 *            Stores the output of the addition in the new matrix  
 *      
 *      Input:
 *            Matrix A
 *            Matrix B
 *
 *      Returns: 
 *              the sum which is the new matrix 
 *      Output: 
 *              the sum
 *
 ****************************************************************/

Matrix *add_matrix(Matrix *A, Matrix *B)
{
    if (A->size == B->size) // checks if the Matrix A size and Matrix B size are equal 
    {
        Matrix *sum = malloc(A->size * sizeof(Matrix)); // allocates memory space for the new matrix 
        sum->size = A->size; // matrix points to the size 
        sum->data = malloc(A->size * sizeof(float)); // allocates memory space for the new matrix pointing to size 
        printf("A + B = \n"); // prints the statement "A + B =  " to the terminal 
        for (int i = 0; i < A->size; i++) // loops through all of the rows in the data 
        {
            printf("%.2f  ", A->data[i] + B->data[i]); // prints the sum of the two matrixes to the terminal 
        }

        return sum; // returns the new matrix which stores the addtion of the two matrixes 
    }
    else if (A->size != B->size) // if the Matrix A size and Matrix B size is not equal 
    {
        printf("This math cannot be performed."); // prints this statement 
    }
    return 0; // checks if the function executed successfully 
}

/*******************************************************
 *      Task: Creates another matrix and performs the subtraction of 
 *            the two matrixes
 *            Stores the output of the subtraction in the new matrix  
 *      
 *      Input:
 *            Matrix A
 *            Matrix B
 *
 *      Returns: 
 *              the result which is the new matrix 
 *      Output: 
 *              the result
 *
 *********************************************************/

Matrix *sub_matrix(Matrix *A, Matrix *B)
{

    if (A->size == B->size) // checks if the Matrix A size and Matrix B size are equal 
    {
        Matrix *result = malloc(A->size * sizeof(Matrix)); // allocates memory space for the new matrix
        result->size = A->size; // matrix points to the size 

        result->data = malloc(A->size * sizeof(float)); // allocates memory space for the new matrix pointing to size 

        printf("A - B = \n"); // prints the statement "A + B =  " to the terminal 

        for (int i = 0; i < A->size; i++) // loops through all of the rows in the data 
        {
            printf("%.2f  ", A->data[i] - B->data[i]); // prints the result of the two matrixes to the terminal 
        }

        return result; // returns the new matrix which stores the subtraction of the two matrixes 
    }
    else if (A->size != B->size) // if the Matrix A size and Matrix B size is not equal 
    {
        printf("This math cannot be performed."); // prints this statement 
    }
    return 0; // checks if the function executed successfully 
}