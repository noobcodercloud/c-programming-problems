#include <stdio.h>

int main() {
    int arr[] = {1, 2,3 ,4, 5, 6, 7, 8,9,10, 11, 12 ,13, 14 ,15, 16, 17, 18, 19, 20};
    int size = sizeof(arr)/sizeof(arr[0]);

    //boolean
    int lcmFound = 0, result = 1;
    static int d = 2;
    //loop
    while (!lcmFound) {
        //intializing
        int foundCount = 0;
        //loop 
        for (int i = 0; i < size; i++) {
            //check if any multiple for any number
            if (arr[i] % d == 0 && arr[i] > 1) {
                arr[i] = arr[i]/d;
                foundCount++;
            }
        }
        //if no multiple
        if (foundCount == 0) {
            d++;
        } else { //multiply d if it was used
            result *= d;
        }
        //if all are 1 that mean we got what we wanted
        int temp = 0;
        for (int j = 0; j < size; j++) {
            if (arr[j] != 1) {
                temp++;
            }
        }
        if (temp == 0) {
            lcmFound++;
        }
    }

    printf("%d\n", result);
    return 0;
}