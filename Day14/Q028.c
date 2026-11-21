//To print product of even numbers
#include <stdio.h>

int main() {

    int n, i = 2, product = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(i <= n)
    {
        product = product * i;
        i = i + 2;
    }

    printf("Product of even numbers = %d", product);



    return 0;

}
