#include<stdio.h>
int main()
{
  int f1,f2,i,j,flag;
  scanf("%d%d",&f1,&f2);
  for(i=f1+1;i<f2;++i)
  {
    flag=0;
    for(j=2;j=i/2;++j)
    {
      if(i%j==0)
      {
        flag=1;
        break;
      }
    }
      if(flag==0)
        printf("%d",i);
        
    }
    return 0;
}
