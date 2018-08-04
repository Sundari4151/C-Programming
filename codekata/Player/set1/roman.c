#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
  char rom[30];
  int a[30],l,i,k;
  scanf("%s",&rom);
  l=strlen(rom);
  for(i=0;i<l;i++)
  {
    switch(rom[i])
    {
      case 'I':
            a[i]=1;
            break;
      case 'V':
            a[i]=5;
            break;
      case 'X':
            a[i]=10;
            break;
      default:
            printf("Invalid Choice");
     }
     k=a[l-1];
     for(i=l-1;i>0;i--)
     {
      if(a[i]>a[i-1]
      {
        k=k-a[i-1];
      }
      if(a[i]<=a[i-1])
      {
        k=k+a[i-1];
      }
     }
     printf("%d",k);
 }
            
            
