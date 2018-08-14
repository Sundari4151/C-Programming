#include<stdio.h>
#include<math.h>
#define PI 3.14159265
int main()
{
  int x;
  float ret,val;
  scanf("%d",&x);
  val=PI/180;
  ret=sin(x*val);
  printf("%2.0f",ret);
  return 0;
}
