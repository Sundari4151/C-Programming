#include<stdio.h>
int main()
{
  int year;
   printf("Enter a year:");
   scanf("%d",&year);
   if(year%4==0)
   {
    if( year%100 == 0)
        {
            // year is divisible by 400, hence the year is a leap year
            if ( year%400 == 0)
                printf("yes");
            else
                printf("no");
        }
        else
            printf("yes" );
    }
    else
        printf("no");
    
    return 0;
}