// to Find the Missing Number in an Array
#include <stdio.h>

int main()
{
    int a[100], n, i;
    int sum = 0, total, missing;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    total = n * (n + 1) / 2;

    missing = total - sum;

    printf("%d", missing);

    return 0;
}