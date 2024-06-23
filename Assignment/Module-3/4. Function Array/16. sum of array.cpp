#include<stdio.h>
main()
{

  	int arr[5];
  	int sum = 0;
  
  	printf("Enter 5 numbers: ");
  	for (int i = 0; i < 5; i++)
	{
    	scanf("%d", &arr[i]);
 	}
  	for (int i = 0; i < 5; i++)
	{
    	sum += arr[i];
  	}
  	printf("The sum of the 5 numbers is: %d\n", sum);
}

