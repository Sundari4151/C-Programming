#include<stdio.h>
int main()
{
  int a[100],max,size,i;
  scanf("%d",&size);
  for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    max=a[0];
    for(i=1;i,size;i++)
    {
      if(a[i]>max)
      {
        max=a[i];
      }
    }
    printf("%d",max);
    return 0;
}
  
