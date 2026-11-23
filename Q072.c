//Sum of matrix elements
#include <stdio.h>

int main()
{
    int a[10][10], r, c, i, j, sum = 0;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    printf("Enter matrix elements:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            sum = sum + a[i][j];
        }
    }

    printf("Sum of matrix elements = %d", sum);

    return 0;
}