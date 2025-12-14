#include <stdio.h>
#include <ctype.h>

int main() {
    char s[] = "BORN IN 2015!";

    int i = 0, shift = 1;
    while (s[i] != '\0') {
        if (isdigit(s[i])) {
            int temp_num = s[i] - '0';
            // printf("%d", temp_num); //debug
            temp_num = 9 - temp_num;
            s[i] = temp_num + '0';
        } else if (isalpha(s[i])) {
            s[i] += shift;
            if (s[i] > 90) {
                s[i] -= 26;
            }
        }
        i++;
    }

    i = 0;
    while (s[i] != '\0') {
        if (i == 0) { 
            i++;
            continue; 
        }
        else if (i % 2 != 0) { 
            s[i] = tolower(s[i]);
        }
        i++;
    }
    i--;
    int j = 0;
    while (i > j) {
        int temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i--;
        j++;
    }

    printf("\n%s\n", s);

    return 0;
}