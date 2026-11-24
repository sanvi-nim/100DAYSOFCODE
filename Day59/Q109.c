// to Find the Maximum Sum of a Subarray of Size K
#include <stdio.h>

int main()
{
    int a[100], n, k, i;
    int sum = 0, max;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    if(k <= 0 || k > n)
    {
        printf("Invalid value of k");
        return 0;
    }

    for(i = 0; i < k; i++)
    {
        sum = sum + a[i];
    }

    max = sum;

    for(i = k; i < n; i++)
    {
        sum = sum + a[i] - a[i-k];

        if(sum > max)
        {
            max = sum;
        }
    }

    printf("Maximum sum = %d", max);

    return 0;
}
