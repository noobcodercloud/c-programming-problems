#include <stdio.h>
#include <stddef.h>

int find_outlier(const int values[/* count */], size_t count)
{
    int isEven = 0, isOdd = 0;
    for (int i = 0; i < 3; i++) {
        if (values[i] % 2 == 0) { isEven++; } 
        else { isOdd++; }
    }

    if (isEven == 1 && isOdd == 2) {
        for (int i = 0; i < 3; i++) {
            if (values[i] % 2 == 0) { return values[i]; }
        }
    } else if (isEven == 2 && isOdd == 1) {
        for (int i = 0; i < 3; i++) {
            if (values[i] % 2 != 0)  { return values[i]; }
        }
    } else if (isEven == 3) {
        for (int i = 0; i < count; i++) {
            if (values[i] % 2 != 0)  { return values[i]; }
        }
    } else if (isOdd == 3) {
        for (int i = 0; i < count; i++) {
            if (values[i] % 2 == 0)  { return values[i]; }
        }
    }

    return 0;
}

int main() {
    
    int arr[] = {1, 2, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int result = find_outlier(arr, size);
    printf("%d\n", result);

    return 0;
}