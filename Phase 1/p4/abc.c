#include<stdio.h>
int main()
{
   float principle, rate, time;
   printf("Enter Principle \n");
   scanf("%f",&principle);
   printf("Enter rate \n");
   scanf("%f",&rate);
   printf("Enter time \n");
   scanf("%f",&time);
   float simpleInterest = (principle * rate * time)/100; // logic for Simple Interest
   printf("The simple Interest is %f \n",simpleInterest);
   float compoundInterest = principle * pow((1+rate/100),time) - principle;  // logic for Simple Interest
   printf("The Compound Interest is %f \n",compoundInterest);
   return 0;
}
