#include<stdio.h>
int main()
{
           int f1,f2,rem,i;
           scanf("%d",&f1);
           scanf("%d",&f2);
           if(f1%2==0)
           {
                      f1=f1+1;
           }
           for(i=f1;i<f2;++i)
           {
                      rem=i%2;
                      if(rem==0)
                                 printf("%d",i);
           }
           return 0;
}
