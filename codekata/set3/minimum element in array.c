#include<stdio.h>
int main()
{
  int a[100],min,size,i;
  scanf("%d",&size);
  for(i=0;i<size;i++)
    scan("%d",&a[i]);
    min=a[0];
    for(i=1;i<size;i++)
    {
      if(a[i]<min)
      {
        min=a[i];
      }
    }
      printf("%d",min);
      return 0;
 }
