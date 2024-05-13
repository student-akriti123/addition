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


if( a+b>c&&b+c>a&&a+c>b)
{
printf(" this is a triangle");
}

else
{
printf("this is not a triangle");
}

return 0;
}
