#include<stdio.h>
#include<conio.h>
main()
{
	int stu, mark;
	char name[100];
   	FILE *fptr;

   // use appropriate location if you are using MacOS or Linux
   fptr = fopen("hello.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");                
   }

   printf("Enter number of students: ");
   scanf("%d",&stu);
   
   for (int i=0; i<stu; i++)
	{
		printf("Enter name of student: ");
   		scanf("%s",&name);
   		printf("Enter mark of student: ");
   		scanf("%d",&mark);
   		fprintf(fptr,"Name : %s Marks: %d\n",name, mark);
	}
   
   fclose(fptr);
}
