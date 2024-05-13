#include<stdio.h>
int main()
{
int a;
printf("enter the value of a:");
scanf("%d",&a);

int c;
printf("enter the value of c:");
scanf("%d",&c);

int b;
printf("enter the value of b:");
scanf("%d",&b);


if(a>b&&a>c)
{
printf("a is greatest digit ");
}

if(b>a&&b>c)
{
printf("b is greatest digit ");
}

if(c>b&&c>c)
{
printf("c is greatest digit ");
}

return 0;
}
