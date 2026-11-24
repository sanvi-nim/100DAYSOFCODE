// to Find the Maximum Element in Each Subarray of Size K
#include <stdio.h>

int main()
{
    int a[100], n, k, i, j, max;

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

    for(i = 0; i <= n - k; i++)
    {
        max = a[i];

        for(j = i; j < i + k; j++)
        {
            if(a[j] > max)
            {
                max = a[j];
            }
        }

        printf("%d ", max);
    }

    return 0;
}
