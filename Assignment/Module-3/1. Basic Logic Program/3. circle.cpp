#include<stdio.h>
main()
{
	int radius;
	float area, circumference;
	float pi=3.14;
	printf("Enter Radius value:");
	scanf("%d",&radius);
	area= pi*radius*radius;
	circumference= 2*pi*radius;
	printf("Area of given radius is %f", area);
	printf("\nCircumference of given radius is %f", circumference);
    	
}
