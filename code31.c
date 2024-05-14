#include<stdio.h>
 int add(int a,int b)
{
return a+b;
}
int main()
{
int a;
printf("enter the value:a\n");
scanf("%d",&a);
int b;
printf("enter the value:b\n");
scanf("%d",&b);
int sum=add(a,b);
printf("%d",sum);
return 0;
}
