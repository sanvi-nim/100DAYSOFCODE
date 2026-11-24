//To Find the Majority Element in an Array
#include <stdio.h>

int main()
{
    int a[100], n, i, j, count;
    int majority = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = 0; j < n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
            }
        }

        if(count > n / 2)
        {
            majority = a[i];
            break;
        }
    }

    printf("%d", majority);

    return 0;
}
