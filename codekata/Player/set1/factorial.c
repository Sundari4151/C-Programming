#include<stdio.h>
int main()
{
  int c,n,f=1;
  scanf("%d",&n);
  for(c=1;c<=n;c++)
    f=f*c;
  printf("%d",f);
  return 0;
}
