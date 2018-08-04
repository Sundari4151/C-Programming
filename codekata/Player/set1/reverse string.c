#include<stdio.h>
#include<string.h>
int main()
{
  char a[100];
  int i,len;
  gets(a);
  len=strlen(a);
  for(i=len-1;i>=0;i--)
  {
    printf("%c",a[i]);
   }
   return 0;
 }
