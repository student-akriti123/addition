#include<stdio.h>
int main()
{

int a;
printf("Enter the value a\n");
scanf("%d",&a);

if(a%5==0 && a%3==0)
   {
     printf("The number is divisible\n");
   }

   else
   {
      printf("The number is not divisible\n") ;
   }

return 0;
}
