# Dharani
#include<stdio.h>
int main()
{
  int num;
  printf("Enter the number");
  scanf("%d",&num);
  if(num<0)
    printf("The given number is a negative number");
  elseif(num>0)
    printf("The given number ia a positive number");
  else
    printf("The given number is Zero");
  return 0;
}
