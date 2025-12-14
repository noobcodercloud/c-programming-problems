#include <stdio.h>

int main() {
    int dividend = -44, divisor = 2, quotient = 0;
    int negative = (dividend < 0) ^ (divisor < 0);
    if (divisor == 0) {
        printf("Error - can't divide by zero.\n");
    }
    else {
        int dividendisNegative = (dividend < 0) ? 1 : 0;
        int divisorisNegative = (divisor <  0) ? 1 : 0;
        if (dividendisNegative) {
            dividend = -dividend;
        }
        if (divisorisNegative) {
            divisor = -divisor;
        }
        while (dividend >= 0) {
            if (dividend < divisor) { break; }
            dividend -= divisor;
            quotient++;
        }
        if (negative) {
            quotient = -quotient;
        }
        printf("Quotient: %d\n", quotient);
    }

    return 0;
}