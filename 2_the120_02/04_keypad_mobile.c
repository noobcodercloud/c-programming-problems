#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    
    char *char_groups[] = { "abc ", "def ", "ghi ", "jkl ", "mno ", "pqrs", "tuv ", "wxyz" };

    char input[] = "my name is kirat";
    
    int main_ind = 0;
    while (input[main_ind] != '\0') {
        char curr = input[main_ind];
        if ( isalpha(curr) ) {
            for (size_t i = 0; i < 8; i++) {
                for (size_t j = 0; j < 4; j++) {
                    if (curr == char_groups[i][j]) {
                        for (size_t prntCnt = 0; prntCnt <= j; prntCnt++) {
                            printf("%d", i+2);
                        }
                        printf(" ");
                    }
                }
            }
        }
        main_ind++;
    }


    return 0;
}