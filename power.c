#include<stdio.h>
#include<math.h>
int main()
{
  double result,base,expo;
  printf("Enter the base:");
  scanf("%lf",&base);
  printf("Enter the exponent:");
  scanf("%lf",&expo);
  result=pow(base,expo);
  printf("%lf",result);
  return 0;
}
