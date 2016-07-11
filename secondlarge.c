#include<stdio.h>
int main()
{
  int a[20];
  int n,i,j=0,large,secondlarge;
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
    scanf("%d",&a[i]);
  }
  large=a[0];
  for(i=0;i<n;i++)
  {
    if(n<a[i])
    {
      large=a[i];
      j=i;
    }
  }
  secondlarge=a[n-j-1];
  for(i=0;i<n;i++)
  {
    if(secondlarge<a[i]&&j!=i)
    {
      secondlarge=a[i];
    }
  }
  printf("SECOND LARGEST: %d",secondlarge);
  return 0;
}
