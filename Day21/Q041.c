//To swap the first and last digit of a number


#include <stdio.h>

int main()
{
    int n, first, last, temp, count = 1, divisor = 1, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    temp = n;

    while (temp >= 10)
    {
        temp = temp / 10;
        count++;
        divisor = divisor * 10;
    }

    first = temp;

    result = last * divisor + (n % divisor) / 10 * 10 + first;

    printf("After swapping = %d", result);

    
    return 0;

}
