#include <stdio.h>
#include <stdlib.h>

typedef struct Matrix
{
    int size;    // number of columns
    float *data; // matrix data
} Matrix;

struct Matrix *read_Matrix(char *filename); // function prototype for reading the data from the file

int deleteMatrix(struct Matrix *A); // function prototype for deleting the matrix

Matrix *add_matrix(Matrix *A, Matrix *B); // function prototype for addition

Matrix *sub_matrix(Matrix *A, Matrix *B); // function prototype for subtraction
