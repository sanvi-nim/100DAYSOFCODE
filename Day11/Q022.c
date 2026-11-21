//To find profit and loss percentage given cost price and selling price
#include <stdio.h>

int main() {
float cp,sp,p,l,percent;
printf("Enter cost price ");
scanf("%f",&cp);
printf("Enter selling price ");
scanf("%f",&sp);
if(sp>cp)
{
    p=sp-cp;
    percent=(p/cp)*100;
    printf("Profit = %2f \n", p);
    printf("Profit percentage = %2f %%",percent);

}
else if(cp>sp)
{
    l=cp-sp;
    percent =(l/cp)*100;
    printf("Loss = %2f \n",l);
    printf("Loss percentage = %2f %%",percent);
}
else
{
    printf("No Profit no Loss");
    
}
    return 0;

}
