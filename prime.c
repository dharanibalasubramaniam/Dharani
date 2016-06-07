#include<stdio.h>
int main()
{
  int num,flag=0,i;
  printf("Enter the number");
  scanf("%d",&num);
  for(i=2;i<num/2;i++)
  {
    flag=1;
    break;
  }
  if(flag==0)
   printf("The number is a prime number %d",num);
  else
    printf("The number is a not a prime number %d",num);
  return 0;
}
