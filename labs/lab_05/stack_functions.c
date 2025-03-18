//
// Created by ddrob on 3/18/2025.
//

#include "stack_functions.h"

#include <stdio.h>
#include <stdlib.h>

void createStack(int capacity, Stack * stack) {
    stack->capacity = capacity;
    stack->top = -1;
    stack->elements = (int *)malloc(stack->capacity * sizeof(int));
    if (!stack->elements) {
        printf("Error allocating stack\n");
        exit(-1);
    }

}


void destroyStack(Stack* stack) {
    stack->capacity = 0;
    stack->top = -1;
    free(stack->elements);
    stack = NULL;
}

bool isFull(Stack stack) {
    return stack.top == stack.capacity - 1;
}

bool isEmpty(Stack stack) {
    return stack.top == -1;
}

void push(Stack* stack, int item) {
    if (isFull(*stack)) {
        printf("Stack is full\n");
    }
    else {
        stack->elements[++stack->top] = item;
    }
}

int pop(Stack* stack) {
    if (isEmpty(*stack)) {
        printf("Stack is empty\n");
        return INT_MIN;
    }
    int save = stack->elements[stack->top];
    stack->elements[stack->top--] = INT_MIN;
    return save;
}

int peek(Stack stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return INT_MIN;
    }
    return stack.elements[stack.top];
}

int size(Stack stack) {
    return stack.top + 1;
}