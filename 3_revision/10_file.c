#include <stdio.h>

int main() {
    
    FILE *fp;

    fp = fopen("AloneBoyDevil.txt", "w");
    fprintf(fp, "Hello %s", "Ridhim Alone Boy Devil");
    fclose(fp);

    return 0;
}