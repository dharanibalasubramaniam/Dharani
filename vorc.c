# Dharani
#include<stdio.h>
int main()
{
 char str;
 printf("Enter the character");
 scanf("%c",&str);
 if(str=='a'||str=='e'||str=='i'||str=='o'||str=='u'||str=='A'||str=='E'||str=='I'||str=='O'||str=='U')
  printf("Character is a vowel");
else
  printf("Character is a consonant");
return 0;
}
