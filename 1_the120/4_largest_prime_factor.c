#include <stdio.h>
#include <math.h>

int main() {
    int n = 438927456;
    int factor = 0;
    int max = 0;
    for (int i = 1; i*i < n; i++) {
        if (n%i == 0) {
            factor = i;
        }
        int isPrime = 1;
        for (int j = 2; j < factor; j++) {
            if (factor%j==0) {
                isPrime = 0;
                break;
            }
        }
        if (factor > 1 && isPrime) {
            if (factor >= max) {
                max = factor;
            }
        }
    }
    printf("%d\n", max);
    return 0;
}