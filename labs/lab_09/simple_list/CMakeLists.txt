cmake_minimum_required(VERSION 3.29.6)
project(simple_list C)

set(CMAKE_C_STANDARD 23)

add_executable(simple_list main.c
        simple_list_functions.c
        simple_list_functions.h
        ../../lab_10/double_list/main.c
        ../../lab_10/double_list/double_list_functions.c
        ../../lab_11/binary_tree.c
        ../../lab_11/main.c)
