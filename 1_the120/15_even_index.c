#include <stdio.h>

int find_even_index(const int *values, int length) {
  
    int index = -1;
    for (int i = 0; i < length; i++) {
        int SumLeft = 0, SumRight = 0;
        printf("i = %d\n", i); //debug
        for (int left = 0; left < i; left++) {
            // printf("Entered second loop\n"); //debug
            SumLeft += values[left];
        }
        for (int right = i + 1; right < length; right++) {
            // printf("Entered third loop\n"); //debug
            SumRight += values[right];
        }
        printf("%d - %d\n", SumLeft, SumRight); //debug
        if (SumLeft == SumRight) {
            index = i;
            break;
        }
    }

    return index;
}

int main() {
    
    int arr[] = { 10,-80,10,10,15,35,20 };
    int result = find_even_index(arr, (int)(sizeof(arr)/sizeof(arr[0])));
    printf("%d\n", result);

    return 0;
}