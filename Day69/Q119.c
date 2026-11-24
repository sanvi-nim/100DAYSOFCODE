//To Find the Repeated Element in an Array
#include <stdio.h>

int main()
{
    int a[100], n, i, j, repeated = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < i; j++)
        {
            if(a[i] == a[j])
            {
                repeated = a[i];
                break;
            }
        }

        if(j < i)
            break;
    }

    printf("%d", repeated);

    return 0;
}
