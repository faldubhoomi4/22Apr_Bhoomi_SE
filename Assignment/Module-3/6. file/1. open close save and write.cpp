#include<stdio.h>
#include<conio.h>
main()
{
	char ch[100];
   FILE *fptr;

   // use appropriate location if you are using MacOS or Linux
   fptr = fopen("hello.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");                
   }

   printf("Enter data: ");
   scanf("%s",&ch);

   fprintf(fptr,"%s",ch);
   fclose(fptr);
}
