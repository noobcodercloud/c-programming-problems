#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "psbcdaap";
    int i = 0, oddCount = 0;;
    while (str[i] != '\0') {
        int charCount = 1, j = 0;
        while (str[j] != '\0') {
            if (i != j && str[i] == str[j]) {
                charCount++;
            }
            j++;
        }
        if (charCount % 2 != 0) {
            oddCount++;
        }
        i++;
    }
    printf("%d\n", oddCount);

    return 0;
}