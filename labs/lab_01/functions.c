//
// Created by ddrob on 2/18/2025.
//

#include "functions.h"


/*int sum(int number1, int number2) {
        return number1 + number2;
}

float minimum(float number1, float number2, float number3) {
        float min = number1;
        if (number2 < min){
               min = number2;
        }
        if (number3 < min){
               min = number3;
        }
        return min;
}



int* allocateMemoryForArray2(int n, int** dpArray) {
    *dpArray = (int*)malloc(n * sizeof(int));
    if (*dpArray == NULL) {
        printf("Memóriafoglalási hiba!\n");
        return NULL;
    }
    return *dpArray;
}


void readArray(int *pn, int **dpArray, const char *input) {
    if (!freopen(input, "r", stdin)) {
        exit(-2);
    }
    scanf("%i", pn);

    if (allocateMemoryForArray2(*pn, dpArray) == NULL) {
        exit(-1);
    }

    for (int i = 0; i < *pn; i++) {
        scanf("%i", &((*dpArray)[i]));
    }

}*/

int * allocateMemoryForArray1(int n) {
    int* array = (int*)malloc(n * sizeof(int));
    if (array == NULL) {
        printf("Memóriafoglalási hiba!\n");
        return NULL;
    }
    return array;
}

void readNumbersFromFile(float *array, int n, const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf ("Hiba a fájl megnyitásakor!\n");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        fscanf(file, "%f", &array[i]);
    }

    fclose(file);
}

void writeToFile(int *array, int n, const char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Hiba volt a fajl megnyitasakjor!\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        fprintf(file, "%i\n", array[i]);
    }
    fclose(file);
}

double findSmallest(double first, double middle, double last) {
    if (first > middle && first < last) {
        return first;
    }
    else if (middle > first && middle < last) {
        return middle;
    }
    else {
        return last;
    }
}

