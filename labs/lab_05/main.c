#include <stdio.h>
#include "stack_functions.h"
#include <string.h>

int main(void) {
     Stack stack;
     createStack(15, &stack);
    // push(&stack, 1);
    // push(&stack, 2);
    // push(&stack, 3);
    // push(&stack, 4);
    // push(&stack, 5);
    // printf("A kivett elem: %i\n", pop(&stack));
    // printf("A kivett elem: %i\n", pop(&stack));
    // push(&stack, 6);
    // push(&stack, 7);
    // push(&stack, 8);
    // printf("A kivett elem: %i\n", pop(&stack));
    // printf("A verem tetejen levo elem: %i\n", peek(stack));
    // int sum=0;
    // while(!isEmpty(stack)) {
    //     sum+=pop(&stack);
    // }
    // printf("Az elemek osszege: %i\n", sum);

    char s[] = "2 5 3 6 + * * 15 / 2 -";
    char *pch;
    pch = strtok(s, " ");
    while (pch != NULL) {
        //printf("%s\n", pch);

        if (strstr("+-*/",pch)) {
            //kiveszunk ket szamot a verembol es elvegezzuk a muveletet

        }
        else {
            //be tesszuk a verembe
            int val=atoi(pch);
            push(&stack, val);
        }

        pch = strtok(NULL, " ");


    }
    return 0;
}
