#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 9; i++)
    {
        int n;

        if(i <= 5)
            n = 2 * i - 1;
        else
            n = 2 * (10 - i) - 1;

        for(j = 1; j <= n; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
