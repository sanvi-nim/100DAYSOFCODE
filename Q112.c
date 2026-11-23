// to Find Maximum Subarray Sum Using Kadane's Algorithm
#include <stdio.h>

int main()
{
    int a[100], n, i;
    int sum, max;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    sum = a[0];
    max = a[0];

    for(i = 1; i < n; i++)
    {
        if(sum + a[i] > a[i])
        {
            sum = sum + a[i];
        }
        else
        {
            sum = a[i];
        }

        if(sum > max)
        {
            max = sum;
        }
    }

    printf("Maximum subarray sum = %d", max);

    return 0;
}