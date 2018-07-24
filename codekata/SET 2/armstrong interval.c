#include<stdio.h>
#include<math.h>
int main()
{
  int n1,n2,i,t1,t2,rem,res=0,n=0;
  scanf("%d %d",&n1,&n2);
  for(i=n1+1;i<n2;++i)
  {
    t2=i;
    t1=i;
    while(t1!=0)
    {
      t1/=10;
      ++n;
    }
    while(t2!=0)
    {
      rem=t2%10;
      res+=pow(rem,n);
      t2/=10;
    }
    if(res==i)
    {
      printf("%d",i);
    }
    n=0;
    res=0;
  }
  return 0;
}
