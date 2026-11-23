//To Find the First and Last Occurrence of an Element in a Sorted Array
#include <stdio.h>

int main()
{
    int a[100], n, i, target;
    int first = -1, last = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter target element: ");
    scanf("%d", &target);

    for(i = 0; i < n; i++)
    {
        if(a[i] == target)
        {
            if(first == -1)
            {
                first = i;
            }

            last = i;
        }
    }

    printf("%d %d", first, last);

    return 0;
}
