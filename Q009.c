//To calculate the simple and compound interest for given principal , rate and time
#include <stdio.h>
#include <math.h>
int main() {
 
 float p,r,t,si,ci,amount;
 printf("Enter Principal:");
 scanf("%f",&p);
 printf ("Enter Rate : ");
 scanf("%f",&r);
 printf("Enter time");
 scanf("%f",&t);
 //Simple interest
 si= (p*r*t)/100;
 //compound interest
 amount = p*pow((1+r/100),t);
 ci= amount -p;
 printf("\n Simple Interest = %f",si);
 printf("\n Compound Interst = %f",ci);
 

    return 0;

}
