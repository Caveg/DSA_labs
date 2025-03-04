//
// Created by ddrob on 3/4/2025.
//
#include <stdio.h>



enum Gender {MALE, FEMALE};

typedef struct {
  int year, month, day;
}Date_t

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


#endif //STUDENT_FUNCTIONS_H
