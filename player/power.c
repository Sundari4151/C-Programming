#include <stdio.h>

int main()
{
  int a,b,c=1,i;
  
  printf("Enter the two numbers:");
  scanf("%d%d",&a,&b);
  
  for(i=0;i<b;i++)
  {
    c=c*a;
  }
  printf("%d",c);
  return 0;
}
