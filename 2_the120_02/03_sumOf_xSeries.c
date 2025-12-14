#include <stdio.h>

int main() {
    int n = 3;
    float sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (1/i);
    }

    printf("%.2f\n", sum);
    return 0;
}