#include <stdio.h>

// No return, no param
void greet() {
    printf("Hello world!");
}

// No return, param
void greet2(int n) {
    printf("%d\n", n);
}

// No param, return
int sum() {
    return 455;
}

// Param, Return
int sumReturn(int n, int k) {
    return n+k;
}

int main() {
    
    int returnValue = sumReturn(1, 2);
    printf("%d", returnValue);

    return 0;
}