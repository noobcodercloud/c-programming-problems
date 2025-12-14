#include <stdio.h>

int callByValue(int n) {
    n = 100;
    printf("N inside callByValue is: %d\n", n);
}

int callByRef(int* n) {
    *n = 100;
    printf("N inside callByRef is: %d\n", *n);
}

int main() {
    
    // & -> address
    // * -> value at address of

    int n = 4;

    // int *ptr = &n;
    // printf("%d\n", *ptr);
    
    // int **ptr2 = &ptr;
    // printf("%d\n", **ptr2);

    callByValue(n);
    printf("N outside function: %d\n", n);
    callByRef(&n);
    printf("N outside function after callByRef: %d\n", n);

    return 0;
}