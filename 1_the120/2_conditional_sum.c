#include <stdio.h>

int main() {
    //Sum of Multiples of 3 or 7 Below 100 Variants
    int sum = 0;
    for (int i = 1; i < 100; i++) {
        if (i%3==0 && i%7==0) {
            sum += i;
        }
    }
    printf("\n%d\n", sum);
    return 0;
}