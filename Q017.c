//To find the roots of a quadratic equation and categorize them
#include <stdio.h>
#include <math.h>

int main() { int a , b,c ;
float d,r1,r2;
printf("Enter the values of a ,b and c");
scanf("%d%d%d",&a,&b,&c);
d=b*b - 4*a*c;
if(d>0)
{
    r1=(-b+sqrt(d)/(2*a));
    r2=(-b-sqrt(d)/(2*a));
    printf("Roots are real and distinct \n");
    printf("Root 1 =%f \n",r1);
    printf("Root 2 =%f \n ",r2);

}
else if(d==0)
{
r1=-b/(2.0*a);
printf("Roots are real and equal \n");
printf("Root = %f",r1);

}
else{
    printf("Roots are imaginary");
}
 return 0;

}
