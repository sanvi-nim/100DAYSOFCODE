//To print the sum of the first n odd numbers
#include <stdio.h>

int main() {
    int n, i = 1, odd = 1, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(i <= n)
    {
        sum = sum + odd;
        odd = odd + 2;
        i++;
    }

    printf("Sum of first %d odd numbers = %d", n, sum);



    return 0;

}
