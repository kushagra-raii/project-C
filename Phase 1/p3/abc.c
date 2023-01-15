#include<stdio.h>
int main()
{
    float radius; // Creating a variable for radius
    printf("Enter the radius of Circle \n");
    scanf("%f",&radius);
    float circumference = 2 * 3.14 * radius; // logic for circumference of circle
    printf("The circumference of circle is %f \n",circumference);
    float area =  3.14 * radius * radius; // logic for Area of circle
    printf("The Area of circle is %f \n",area);
    
    return 0;
}
