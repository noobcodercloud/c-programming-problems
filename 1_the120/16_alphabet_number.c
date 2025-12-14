#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[] = "hello my name is vicky";
    char alphabets[] = "abcdefghijklmnopqrstuvwxyz";

    int index[] = {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 
        11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 
        21, 22, 23, 24, 25, 26
    };

    int i = 0;
    while (str[i] != '\0') {
        if (isalpha((unsigned char)str[i])) {

            char *p = strchr(alphabets, tolower((unsigned char)str[i]));

            if (p != NULL) {
                int pos = (int)(p - alphabets) + 1;  // position 1–26
                printf("%d ", index[pos - 1]);       // array is 0–25
            }
        }
        i++;
    }

    return 0;
}
