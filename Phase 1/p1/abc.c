#include<stdio.h>
int main()
{
    float no1,no2; // Taking to variables(floats)
    printf("Enter First No.");
    scanf("%f",&no1); // reading 1st input 
    printf("Enter second No.");
    scanf("%f",&no2); // reading 1st input 
    printf("Sum of %f and %f is %f \n",no1,no2,no1+no2); // printing sum
    printf("Difference of %f and %f is %f \n",no1,no2,no1-no2);// printing difference
    printf("Multiplication of %f and %f is %f \n",no1,no2,no1*no2);// printing multiplication
    printf("Division of %f and %f is %f \n",no1,no2,no1/no2);// printing division
    return 0;
}
