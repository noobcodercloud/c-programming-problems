#include <stdio.h>
int main() {
    int arr[] = {1, 2, 2, 3, 2, 4, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int input;
    printf("Enter the number to remove: ");
    scanf("%d", &input);
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == input) {
            for (int j = i; j < n-1; j++) {
                arr[j] = arr[j+1];
            }
            --i;
            --n;
        }
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}