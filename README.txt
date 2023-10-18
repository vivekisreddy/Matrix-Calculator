Name: Vivek Reddy Kasireddy 
Date: 02/20/23 
Homework 5 - Matrix Calculator  

Summary: 
The purpose of the program is to write a Matrix calculator that performs addition and subtraction. The program 
reads two 1XN matrices from the files and should be able to add two matrices together and subtract one Matrix
from another. There is a function to read in the input file and allocate the array in the matrix struct. You also 
need a function to delete the matrix. The main file (matrix_calc.c) calls all of the functions using the command line 
arguments in the terminal. The biggest diificulty is making sure that the readData, add_matrix, and sub_matrix
work properly and the memory is being allocated correctly in each of the functions. The main problem I had was the whenever 
I executed the program in the terminal, the output was nothing which meant nothing was going through the functions. I fixed 
the problem by changing the malloc statement to only allocate the correct amount of space in memory.  


To compile: 
            mingw32-make -> makefile 



To execute: 
            .\matrixCalc.exe input1.txt input2.txt a -> addition 

            .\matrixCalc.exe input1.txt input2.txt s -> subtraction 


Sources: 
I have discussed the assignment details with Jahnavi Prudhivi, Era Kalaja, and Aishwarya Silam and for the overall brainstorming for the assigment. 
I have went to office hours along with Jahnavi, Aishwarya, and Era to get help on developing the functions for the program. The SA has 
helped me figure out how the logic will be and gave me a better understanding of how the function works. I have figured 
out how to incorporate the command line argument in main completely on my own but re-clarified any doubts regarding them with Mehrnoush Alizade (SA).
The SA also helped me with finding where the minor errors were in my code and then fixing the errors to make sure the functions work properly and the 
output is executed to the terminal. 