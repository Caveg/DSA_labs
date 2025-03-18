//
// Created by ddrob on 3/11/2025.
//

#include "Student_functions.h"

char *getGender(enum Gender gender) {
    switch (gender) {
        case 0: return "Male";
        case 1: return "Female";
        default: return "Unknown";
    }
}

void allocateMemoryForStudents(Student_t **dpStudents, int numberOfStudents) {
    *dpStudents=(Student_t*)malloc(numberOfStudents*sizeof(Student_t));
    if (!(*dpStudents)) {
        printf("Error allocating memory for students\n");
        exit(-2);
    }
}

void readAllStudentDetails(Student_t **dpStudents, int *numberOfStudents, const char *input) {
    if (! freopen (input, "r", stdin)) {
        printf("Error reading input file\n");
        exit(-3);
    }
    scanf("%d\n", numberOfStudents);
    printf("%d", *numberOfStudents);
    allocateMemoryForStudents(dpStudents, *numberOfStudents);
    for (int i = 0; i < *numberOfStudents; i++) {
        readStudentDetails(&(*dpStudents)[i]);
    }
    freopen ("CON", "r", stdin);
}

void printAllStudent(Student_t *pStudents, int numberOfStudents, const char *destination) {
    freopen (destination, "r", stdin);
    for (int i = 0; i < numberOfStudents; i++) {
        printStudent(pStudents[i]);
    }
    freopen ("CON", "r", stdin);
}

void deAllocate(Student_t **dpstudent) {
    free(*dpstudent);
    *dpstudent=NULL;
}

void readStudentDetails(Student_t *pStudent) {
    scanf("%[^\n]\n",pStudent->name);
    scanf("%[^\n]\n",pStudent->neptuneCode);
    scanf("%[^\n]\n",pStudent->birthPlace);
    scanf("%d%d%d\n",&pStudent->dateOfBirth.year,&pStudent->dateOfBirth.month,&pStudent->dateOfBirth.day);
    scanf("%i", &pStudent->gender);
    scanf("%f\n",&pStudent->examResult);
}

void printStudent(Student_t student) {
    printf("%s\n",student.name);
    printf("%s\n",student.neptuneCode);
    printf("%s\n",student.birthPlace);
    printf("%d %d %d\n",student.dateOfBirth.year,student.dateOfBirth.month,student.dateOfBirth.day);
    printf("%i\n",student.gender);
    printf("%2f\n", student.examResult);
}