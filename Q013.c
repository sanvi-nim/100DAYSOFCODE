// To input a year and check whether it is a leap year or not using conditional statements
#include <stdio.h>

int main() {
    int year;
    printf("Enter the year");
    scanf("%d",&year);
    if(year%4==0)
 printf("Leap year");
 else
 printf("Not a Leap Year");
    return 0;

}
