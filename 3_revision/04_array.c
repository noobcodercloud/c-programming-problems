#include <stdio.h>
#include <string.h>

int main() {
    
    int arr[] = {3, 1, 2, 3};
    
    // arr[0] == 3
    // arr[1] == 1

    // printf("%d\n", arr[0]);
    // printf("%d\n", arr[1]);
    // printf("%d\n", arr[2]);
    // printf("%d\n", arr[3]);

    for (int i = 0; i < 4; i++) {
        printf("%d\n", arr[i]);
    }

    char str[] = "HelloWorld";
    char strCopy[10];
    strcpy(strCopy, str);

    // str[10] == '\0';

    int i = 0;
    while (strCopy[i] != '\0') {
        printf("%c", strCopy[i]); i++;
    }

    

    return 0;
}