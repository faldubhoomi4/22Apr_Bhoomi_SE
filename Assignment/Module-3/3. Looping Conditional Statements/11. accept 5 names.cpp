#include<stdio.h>
main()
{ 
	int i=0;
	char name[5][50];
 	for(i=0; i<5; i++)
 	{
  		printf("Enter Name %d:",i+1);
  		scanf("%s",&name[i]);
 	}

 	for(i=0; i<5; i++)
 	{
  		printf("\nName %d is: %s", i+1, name[i]);
 	}
}

