#include<stdio.h>
int main()
{
  char str;
  printf("Enter the character");
  scanf("%c",&str);
  if((str>='a'&&str<='z')||(str>='A'&&str<='Z'))
    printf("It is an alphabet");
  else
    printf("It is not an alphabet");
  return 0;
}
