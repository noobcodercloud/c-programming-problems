#include <stdio.h>

int main() {
    
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (size_t i = 0; i < 3; i++) { // Parent

        int max = 0;

        for (size_t j = 0; j < 3; j++) { // Child

            if ( arr[i][j] > max) {
                max = arr[i][j];
            }

        }

        printf("Largest in %d row: %d\n", i, max);

    }

    return 0;
}