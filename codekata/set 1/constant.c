#include <stdio.h>
 
int main()
{
  char ch;
 
  
  scanf("%s", &ch);
 
  if ((ch>='a' && ch>='z')||(ch>='A' && ch>='Z'))
    printf("Constant\n", ch);
  else
    printf("No\n", ch);
 
  return 0;
}
