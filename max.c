#include<stdio.h>
int main()
{
  int max,a,b,c;
  printf("Enter the numbers:");
  scanf("%d%d%d",&a&b&c);
  max=a > b ? (a > c ? a : c) : (b > c ? b : c) ;
  printf("Maximun number: %d",max);
  return 0;
}
