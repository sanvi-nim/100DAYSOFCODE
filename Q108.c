// to Find the Product of Array Except Self
#include <stdio.h>

int main()
{
    int nums[100], answer[100];
    int n, i, j, product;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for(i = 0; i < n; i++)
    {
        product = 1;

        for(j = 0; j < n; j++)
        {
            if(i != j)
            {
                product = product * nums[j];
            }
        }

        answer[i] = product;
    }

    printf("Product array:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", answer[i]);
    }

    return 0;
}