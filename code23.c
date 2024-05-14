#include<stdio.h>
int main(){

int n; // itni baar loop chalega

printf("enter the value of n:");
scanf("%d",&n);

int a=3;
for(int i=0;i<n;i++)
{
 a=a*4;

printf("%d\n",a);
}
return 0;
}
