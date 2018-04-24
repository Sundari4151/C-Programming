#include <stdio.h>
 
int main()
{
  char ch;
 
  
  scanf("%s", &ch);
 
  if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch =='o' || ch=='O' || ch == 'u' || ch == 'U')
    printf("Vowel\n", ch);
  else
    printf("Not a vowel\n", ch);
 
  return 0;
}
