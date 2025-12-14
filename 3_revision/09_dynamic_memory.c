#include <stdio.h>
#include <stdlib.h>

int main() {



    size_t n;
    printf("Enter size:\n");
    scanf("%zu", &n);

    int *arr = malloc(n * sizeof(int));

    for (size_t i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    size_t n2;
    printf("\nEnter size again:\n");
    scanf("%zu", &n2);

    int *arr2 = realloc(arr, n2 * sizeof(int));
    if (arr2 == NULL) {
        free(arr);
        return 1;
    }

    for (size_t i = 0; i < n2; i++) {
        printf("%d ", arr2[i]);
    }

    free(arr2);
    return 0;
}
