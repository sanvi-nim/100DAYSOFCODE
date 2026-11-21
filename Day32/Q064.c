//find the digit that occurs the most times in an integer number
#include <stdio.h>

int main()
{
    long long n;
    int a[10] = {0};
    int digit, i, max = 0, num = 0;

    printf("Enter a number: ");
    scanf("%lld", &n);

    if(n < 0)
        n = -(n + 1) + 1ULL;

    do
    {
        digit = n % 10;
        a[digit]++;
        n = n / 10;
    } while(n != 0);

    for(i = 0; i < 10; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
            num = i;
        }
    }

    printf("Most frequent digit = %d\n", num);
    printf("Frequency = %d", max);

    return 0;
}
