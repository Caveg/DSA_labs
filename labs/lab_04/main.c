#include "Student_functions.h"

int main(void) {
    /*Student_t student1={"Fekete Pako","CQPNSU","Szatmar",2004,10,19,0,8};
    printStudent(student1);
    Student_t student2;
    if (! freopen("input.txt", "r", stdin)) {
        printf("Error in opening the file\n");
        return -2;
    }
    else {
        readStudentDetails(&student2);
        printStudent(student2);
        freopen("CON", "r", stdin);
    }
    Student_t student3;
    readStudentDetails(&student3);
    printStudent(student3);*/

    int n;
    Student_t *array;
    readAllStudentDetails(&array, &n, "input.txt");
    printAllStudent(array,n,"CON");
    deAllocate(&array);

    return 0;
}
