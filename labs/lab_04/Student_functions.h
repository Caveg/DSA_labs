//
// Created by ddrob on 3/11/2025.
//

#include <stdio.h>
#include <stdlib.h>

enum Gender {MALE, FEMALE};

typedef struct {
    int year, month, day;
}Date_t;

typedef struct {
    char name[51];
    char neptuneCode[51];
    char birthPlace[26];
    Date_t dateOfBirth;
    enum Gender gender;
    float examResult;

} Student_t;

#ifndef STUDENT_FUNCTIONS_H
#define STUDENT_FUNCTIONS_H

void readStudentDetails(Student_t *pStudent);
void printStudent(Student_t student);
char *getGender(enum Gender gender);
void allocateMemoryForStudents(Student_t **dpStudents, int numberOfStudents);
void readAllStudentDetails(Student_t **dpStudents, int *numberOfStudents, const char *input);
void printAllStudent(Student_t *pStudents, int numberOfStudents, const char *destination);
void deAllocate(Student_t **dpstudent);

#endif //STUDENT_FUNCTIONS_H
