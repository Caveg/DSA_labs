#include "functions.h"


int main(void) {
    /*printf("%i\n", sum(2,4));
    printf("%f\n", minimum(4,5,3));


    int n;
    scanf("%i", &n);
    int* array = allocateMemoryForArray1(n);
    if (array == NULL) {
        return 1;
    }
    for (int i = 0; i < n; i++) {
        array[i] = i * 2;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    free(array);


    int n2;
    int* array2;

    readArray(&n2, &array2, "input.txt");

    for (int i = 0; i < n2; i++) {
        printf("%d ", array2[i]);
    }
    printf("\n");
    free(array2);*/

    int n;

    do {
        printf("Kerem adjon meg egy pozitiv paratlan szamot: ");
        scanf("%d", &n);
    } while (n <= 0 || n % 2 == 0);

    int* array = allocateMemoryForArray1(n);

    readNumbersFromFile(array, n, "input.txt");
    writeToFile(array, n, "output.txt");

    double first = array[0];
    double middle = array[n / 2];
    double last = array[n - 1];
    double smallest = findSmallest(first, middle, last);



    printf("Az elso elem: %f\n", first);
    printf("A kozopso elem: %f\n", middle);
    printf("Az utolso elem: %f\n", last);
    printf("A legkisebb ertek: %f\n", smallest);

    free(array);

    return 0;
}
