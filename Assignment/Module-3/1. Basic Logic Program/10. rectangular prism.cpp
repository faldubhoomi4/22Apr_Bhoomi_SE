#include<stdio.h>
main()
{
	float l, w, h, a;
	printf("Enter number value of Length:");
	scanf("%f",&l);
	printf("Enter number value of Width:");
	scanf("%f",&w);
	printf("Enter number value of height:");
	scanf("%f",&h);
	a=2*(w*l+h*l+h*w);
	printf(" area of a rectangular prism: %f", a);   	
}
