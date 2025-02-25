//
// Created by ddrob on 2/18/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
/*int sum(int number1, int number2);
float minimum(float number1, float number2, float number3);

int* allocateMemoryForArray2(int n, int** dpArray);
void readArray(int *pn, int **dpArray, const char *input);*/

int* allocateMemoryForArray1(int n);
void readNumbersFromFile(float *array, int n, const char *filename);
void writeToFile(int *array, int n, const char *filename);
double findSmallest(double first, double middle, double last);

#endif //FUNCTIONS_H
