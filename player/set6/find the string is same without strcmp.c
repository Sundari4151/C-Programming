#include<stdio.h>
int main()
{ 
  char str1[15],str2[15];
  int i,temp=0;
  scanf("%s",str1);
  scanf("%d",str2);
  for(i=0;str[i]!='\0';i++)
  {
    if(str1[i]==str2[i])
      temp=1;
    else
      temp=0;
  }
  if(temp==1)
    printf("yes");
  else
    printf("no");
 
 return 0;
}
