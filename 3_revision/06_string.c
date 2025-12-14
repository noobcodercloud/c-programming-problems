#include <stdio.h>
#include <string.h>

int main() {
    
    char greet[20] = "Hello ";
    char name[] = "Ridhim";
    // String concatination
    strcat(greet, name);
    printf("%s\n", greet);

    // String lenth
    int len = strlen(name);
    printf("%d\n", len);

    // String copy
    char copy[50];
    strcpy(copy, greet);
    printf("%s\n", copy);

    return 0;
}