#include<stdio.h>
int main()
{
  int b[20],N,K,i,sum=0;
  scanf("%d",&N);
  scanf("%d",&K);
  for(i=0;i<N;i++)
  {
    scanf("%d",&b[i]);
  }
  for(i=0;i<K;i++)
  {
    sum=sum+b[i];
  }
  printf("%d",sum);
  return 0;
 }
    
