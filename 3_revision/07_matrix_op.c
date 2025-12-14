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

    for (size_t i = 0; i < 3; i++) {
        for (size_t j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}