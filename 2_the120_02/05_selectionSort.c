#include <stdio.h>

int main() {
    
    int arr[] = {2, 9, 1, 4, 7, 5, 6, 3, 4, 8, 4, 4};
    size_t size = sizeof(arr)/sizeof(arr[0]);


    for (size_t i = 0; i < size - 1; i++) {
        int min_j_th_value = arr[i], min_j_th_value_index = i;
        for (size_t j = i + 1; j < size; j++) {
            if (arr[j] < min_j_th_value) {
                min_j_th_value = arr[j];
                min_j_th_value_index = j;
            }
        }
        if (min_j_th_value_index != i) {
            int temp = arr[i];
            arr[i] = arr[min_j_th_value_index];
            arr[min_j_th_value_index] = temp;
        }
    }



    for (size_t x = 0; x < size; x++) {
        printf("%d ", arr[x]);
    }



    return 0;
}