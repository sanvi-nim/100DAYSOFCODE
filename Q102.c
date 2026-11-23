//to Find the Ceil of X in a Sorted Array
#include <stdio.h>

int main()
{
    int a[100], n, x, i, index = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter value of x: ");
    scanf("%d", &x);

    for(i = 0; i < n; i++)
    {
        if(a[i] >= x)
        {
            index = i;
            break;
        }
    }

    printf("%d", index);

    return 0;
}