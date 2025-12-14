#include <stdio.h>

int n = 10;
int recursion() { // Syntax
    // if (n == 5) return 0; // Condition
    // printf("%d\n", n); // Code
    n--; // Update
    if (n > 5) {
        return recursion(n); // Loop
    }
}

int main() {

    int returnValue = recursion();
    printf("%d\n", returnValue);

    return 0;
}