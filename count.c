#include<stdio.h>
int main()
{
   int c=0;
   long long n;
   printf("Enter the integer:");
   scanf("%lld",&n);
   while(n!=0)
   {
      n=n/10;
      ++c;
   }
   printf("Digits are %d",c);
   return 0;
}
