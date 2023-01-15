#include<stdio.h>
int main()
{
    float enterInFahrenheit;
    printf("Enter temperature in fahrenheit \n");
    scanf("%f",&enterInFahrenheit);
    float toCelsius = (enterInFahrenheit - 32)*5/9;
    printf("Temperature in Celsius is %f \n",toCelsius);
    float enterInCelsius;
    printf("Enter temperature in celsius \n");
    scanf("%f",&enterInCelsius);
    float toFahrenheit = enterInCelsius * 9/5 +32;
    printf("Temperature in Fahrenheit is %f \n",toFahrenheit);
    return 0;
}