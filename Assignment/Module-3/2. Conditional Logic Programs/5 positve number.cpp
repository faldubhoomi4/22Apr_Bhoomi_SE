#include<stdio.h>
main()
{
  int n;
  printf("Enter the number: ");
  scanf("%d",&n);
  if(n>=0)
    printf("%d is positive",n);
  else
    printf("%d is negative",n);
}
