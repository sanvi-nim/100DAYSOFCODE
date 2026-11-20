//To find and display the sum of the first n natural numbers
#include <stdio.h>

int main() {
printf("Enter the range of the numbers");
int n , sum;
scanf("%d",&n);
for( int i=1;i<=n;i++)
{
    sum = sum +i;

}
printf("Sum : %d", sum);
    return 0;

}
