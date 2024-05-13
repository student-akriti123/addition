#include<stdio.h>
int main()
{

int n;
printf("enter the value n:");
scanf("%d",&n);

if(n<0)
{
   n=n*(-1);

}

printf("this is a abselute number %d :",n);
return 0;
}
