#include <stdio.h>
 
int main()
{
  char ch;
 
  
  scanf("%s", &ch);
 
  if ((ch>='a' && ch>='z')||(ch>='A' && ch>='Z'))
    printf("Yes\n", ch);
  else
    printf("No\n", ch);
 
  return 0;
}
