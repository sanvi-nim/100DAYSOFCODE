//To check an Armstrong number

#include <stdio.h>
#include <math.h>

int main()
{
    int n, original, rem, sum = 0, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    int temp = n;

    while (temp > 0)
    {
        count++;
        temp = temp / 10;
    }

    temp = n;

    while (temp > 0)
    {
        rem = temp % 10;
        sum = sum + pow(rem, count);
        temp = temp / 10;
    }

    if (sum == original)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    
    return 0;

}
