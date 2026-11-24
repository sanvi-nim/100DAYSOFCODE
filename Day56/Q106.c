//to Find the Next Greater Element for Each Element in an Array
#include <stdio.h>

int main()
{
    int a[100], n, i, j, next;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Next greater elements:\n");

    for(i = 0; i < n; i++)
    {
        next = -1;

        for(j = i + 1; j < n; j++)
        {
            if(a[j] > a[i])
            {
                next = a[j];
                break;
            }
        }

        if(i > 0)
        {
            printf(",");
        }

        printf("%d", next);
    }

    return 0;
}
