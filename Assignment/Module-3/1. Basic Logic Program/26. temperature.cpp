#include<stdio.h>
main() 
{
	float fahrenheit, celsius;
   	printf("Enter Fahrenheit value: ");
   	scanf("%f",&fahrenheit);
   	celsius = (fahrenheit - 32)*5/9;
   	printf("Celsius value is: %f ", celsius);
}
