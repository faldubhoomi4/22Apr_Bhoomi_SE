#include<stdio.h>
main()
{
	 char fname[20], mname[20], lname[20];

     printf("Enter school name: ");
     scanf("%s %s %s", fname, mname, lname);

     printf("Abbreviated name: ");
     printf("%c. %c. %s", fname[0], mname[0], lname);
}
