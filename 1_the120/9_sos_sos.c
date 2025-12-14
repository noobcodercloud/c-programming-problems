#include <stdio.h>

int main() {
    int n = 100;
    int sum_of_squares = 0;
    int square_of_sum = 0;

    for (int i = 1; i <= n; i++) {
        square_of_sum += i;
    }
    square_of_sum *= square_of_sum;
    for (int i = 1; i <= n; i++) {
        sum_of_squares = sum_of_squares + i*i;
    }
    
    printf("%d\n", square_of_sum);
    printf("%d\n", sum_of_squares);

    int diff = square_of_sum - sum_of_squares;
    printf("%d\n", diff);

    return 0;
}