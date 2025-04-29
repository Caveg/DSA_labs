cmake_minimum_required(VERSION 3.29)
project(DSA_labs C)

set(CMAKE_C_STANDARD 11)

include_directories(labs/lab_01)
include_directories(labs/lab_03)
include_directories(labs/lab_04)
include_directories(labs/lab_05)

add_executable(DSA_labs
    courses/course_01/main.c
    courses/course_02/main.c
    courses/course_03/main.c
    courses/course_04/main.c
    courses/course_05/main.c
    courses/course_06/main.c
    courses/course_07/main.c
    courses/course_08/main.c
    courses/course_09/main.c
    courses/course_10/main.c
    courses/course_11/main.c
    courses/course_12/main.c
    courses/course_13/main.c
    courses/course_14/main.c
    extras/extra_02/main.c
    extras/extra_03/main.c
    extras/extra_04/main.c
    labs/lab_01/functions.c
    labs/lab_01/functions.h
    labs/lab_01/main.c
    labs/lab_02/main.c
    labs/lab_03/main.c
    labs/lab_03/Student_functions.c
    labs/lab_03/Student_functions.h
    labs/lab_04/main.c
    labs/lab_04/Student_functions.c
    labs/lab_04/Student_functions.h
    labs/lab_05/main.c
    labs/lab_05/stack_functions.c
    labs/lab_05/stack_functions.h
    labs/lab_06/main.c
    labs/lab_07/main.c
    labs/lab_08/main.c
    labs/lab_09/main.c
    labs/lab_10/main.c
    labs/lab_11/main.c
    labs/lab_12/main.c
    labs/lab_13/main.c
    labs/lab_14/main.c)
