#include <stdio.h>

int main() {
    char str[] = "hello world how are you";
    char sub[] = "o w";

    int i = 0, occFound = 0, index = -1;
    while (str[i] != '\0' && !occFound) {
        if (str[i] == sub[0]) {
            int j = i, k = 0;
            while (sub[k] == str[j] && str[j] != '\0' && sub[k] != '\0') {
                if (sub[k+1] == '\0') {
                    occFound = 1;
                    index = i;
                    break;
                }
                k++; j++;
            }
        }
        i++;
    }
    printf("First occurance at index: %d\n", index);

    return 0;
}