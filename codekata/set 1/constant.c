#include <stdio.h>
 
int main()
{
  char ch;
 
  
  scanf("%s", &ch);
 
  if ((ch>='a' && ch>='z')||(ch>='A' && ch>='Z'))
    printf("Consonant\n", ch);
  else
    printf("Invalid\n", ch);
 
  return 0;
}
