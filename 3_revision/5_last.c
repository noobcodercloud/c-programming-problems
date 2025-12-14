#include <stdio.h>

int changeArr(int *arr, int len) {
    if (len == 0) return 0; // Condition
    static int i = 0;
    arr[i] = i + 1;
    i++; 
    len--;
    changeArr(arr, len);
}

int main() {
    
    int arr[] = {1, 1, 1, 1, 1};
    changeArr(arr, 5);

    for (size_t i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}