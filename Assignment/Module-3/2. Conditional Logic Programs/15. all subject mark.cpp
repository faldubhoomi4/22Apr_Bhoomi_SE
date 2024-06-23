#include<stdio.h>
main()
{
	int a, b, c, total, total_maths_phy;
	printf("Enter mark Maths:");
	scanf("%d",&a);
	printf("Enter mark Physics:");
	scanf("%d",&b);
	printf("Enter mark chemical:");
	scanf("%d",&c);
	total=a+b+c;
	total_maths_phy=a+b;
	if(total>=190 || total_maths_phy >=140) 
	{
		 printf("The candidate is eligible.");
		 
	} 
	else
	{
		printf("The candidate is not eligible.");
	}
	
	
}
