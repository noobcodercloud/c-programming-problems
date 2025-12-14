#include <stdio.h>

int main() {
    int first = 0, second = 1;
    int next, sum = 0;

    while (1) {
        next = first + second;
        if (next > 100) break;

        if (next % 2 == 0)
            sum += next;

        first = second;
        second = next;
    }

    printf("%d\n", sum);
    return 0;
}
