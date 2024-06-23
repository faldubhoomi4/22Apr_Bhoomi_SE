#include<stdio.h>
main()
{
	 char cname[50];

     printf("Enter country name: ");
     scanf("%s", cname);

     printf("Abbreviated name: ");
     printf("%c%c", cname[0], cname[1]);
}
