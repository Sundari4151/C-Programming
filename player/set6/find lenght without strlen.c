#include<stdio.h>
int  main()
{
  char string[50];
  int i,length=0;
  gets(string);
  for(i=0;string[i]!='\0';i++)
  {
    length++;
  }
  printf("%d\n",length);
  return 0;
 }
