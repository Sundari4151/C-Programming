#include<stdio.h> 

int main(){

           int f1,f2,rem,i;

           printf("   Give the First number for the Range :   \n");

           scanf("%d",&f1);

           printf("   Give the Final number for the Range :   \n");

           scanf("%d",&f2);

           printf("\n The Even numbers between %d and %d are ",f1,f2); 
           if(f1%2==0)
           {
f1=f1+1;
}
for(i=f1; i<f2; i++)
           {

               rem = i % 2;

               if(rem == 0)

               printf("\n  %d",i);

           }

    return 0; 

    } 
