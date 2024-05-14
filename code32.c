#include<stdio.h>
 int product(int a,int b)
{
return a*b;
}
int main()
{
int a;
printf("enter the value:a\n");
scanf("%d",&a);
int b;
printf("enter the value:b\n");
scanf("%d",&b);
int  multiplication=product(a,b);
printf("%d",multiplication);
return 0;
}
