#include<stdio.h>
main()
{
	int num1, num2, add, sub, multi, mod;
	float div;
	printf("Enter Value 1:");
	scanf("%d",&num1);
	printf("Enter Value 2:");
	scanf("%d", &num2);
	add=num1+num2;
	sub=num1-num2;
	multi=num1*num2;
	div=num1/(float)num2;
    mod=num1%num2;	
	printf("Addition=%d",add);
	printf("\nsubstarction=%d",sub);
	printf("\nMultiplition=%d",multi);
	printf("\nDivision=%f",div);
	printf("\nModulo=%d",mod);
}
