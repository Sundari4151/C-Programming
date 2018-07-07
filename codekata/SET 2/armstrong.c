#include<stdio.h>
int main()
{
  int n,orgnumber,rem,res=0;
  scanf("%d",&n);
  while(orgnumber!=0)
  {
    rem=orgnumber%10;
    res=res+rem*rem*rem;
    orgnumber/=10;
  }
  if(res==n)
    printf("yes");
  else
    printf("no");
    return 0;
  }  
