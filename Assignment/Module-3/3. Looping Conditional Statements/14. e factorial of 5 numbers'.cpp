#include<stdio.h>
main()
{
	int i=0, number[5],j,f;
 	for(i=0; i<5; i++)
 	{
  		printf("Enter Number %d: ",i+1);
  		scanf("%d",&number[i]);
 	}

 	for(i=0; i<5; i++)
 	{
  		f=j=1;
    	while(j<=number[i])
    	{
        	f*=j;
        	j++;
    	}
    	printf("\nThe Factorial of %d is : %d",number[i],f);
 	}
}
