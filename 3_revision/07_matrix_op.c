#include <stdio.h>

int main() {
    
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // arr[0][0]
    // printf("%d\n", arr[0][0]); = 1
    // printf("%d\n", arr[0][1]); = 2
    // printf("%d\n", arr[0][2]); = 3

    int sum = 0;

    for (size_t i = 0; i < 3; i++) { // Parent

        for (size_t j = 0; j < 3; j++) { // Child

            printf("%d ", arr[i][j]);

            sum += arr[i][j];

            // 0 0
            // 0 1
            // 0 2

            // 1 0
            // 1 1
            // 1 2

            // 2 0
            // 2 1
            // 2 2

        }

        printf("\n");
    }

    printf("\nSum of matrix: %d\n\n", sum);

    return 0;
}