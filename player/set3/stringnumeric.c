#include<stdio.h>
#include<ctype.h>
int main()
{
  char v1;
  scanf("%s",v1);
  if(isdigit(v1))
    printf("yes");
  else
    printf("no");
  return 0;
}
