//
// Created by ddrob on 3/4/2025.
//

#include "Student_functions.h"

void readStudentDetails(Student_t *pStudent) {
  scanf("%[^\n]\n", pStudent->name);
  scanf("%[^\n]\n", pStudent->neptuneCode);
  scanf("%[^\n]\n", pStudent->birthPlace);
  scanf("%d%d%d\n", &pStudent->dateOfBirth.year, &pStudent->dateOfBirth.month, &pStudent->dateOfBirth.day);
  scanf("%f\n", &pStudent->examResult);
}

void printStudent(Student_t student) {
  printf("%[^\n]\n", student.name);
  printf("%[^\n]\n", student.neptuneCode);
  printf("%[^\n]\n", student.birthPlace);
  printf("%d%d%d\n", student.dateOfBirth.year, student.dateOfBirth.month, student.dateOfBirth.day);
  printf("%f\n", student.examResult);
}
