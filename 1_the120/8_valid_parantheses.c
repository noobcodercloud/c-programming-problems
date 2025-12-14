#include <stdio.h>

int main()
{
    char par[] = "((((()))))((((((()))))))(()";

    int i = 0, j = 0, opening = 0, closing = 0, temp = 0, pair = 0;
    while (par[i] != '\0')
    {
        opening = 0, closing = 0;
        // printf("Enter first while loop.\n");
        if (par[i] == '(')
        {
            // printf("Enter first if statement loop.\n");
            j = i;
            while (par[j] == '(' && par[j] != '\0')
            {
                // printf("Enter second while loop.\n");
                j++;
                opening++;
                if (par[j] == ')')
                {
                    // printf("Found first ')'.\n");
                    temp = opening;
                    break;
                }
            }
            while (par[j] == ')' && par[j] != '\0')
            {
                // printf("Enter third while loop and checking for ')'.\n");
                closing++;
                j++;
            }
        }
        // printf("All done. printing Outputs.\n");
        int valid = (opening < closing) ? opening : closing;

        if (valid > pair)
        {
            pair = valid;
        }

        i++;
    }

    printf("The valid longest pair is: %d\n", pair);

    return 0;
}