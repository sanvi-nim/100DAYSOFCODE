//find the second largest element in an array
#include <stdio.h>
#include <limits.h>

int main()
{
    int a[100], n, i;
    int max = INT_MIN, second = INT_MIN;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] > max)
        {
            second = max;
            max = a[i];
        }
        else if(a[i] < max && a[i] > second)
        {
            second = a[i];
        }
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] == second && second < max)
        {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Second largest element = %d", second);
    else
        printf("Second largest element does not exist");

    return 0;
}
