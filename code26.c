#include<stdio.h>
int main(){

int  n;
printf("enter the value of n:");
scanf("%d",&n);


 int sum=0;
int lastdigit=0;


while(n!=0)
 {
 lastdigit= n%10;
 sum=sum+lastdigit;
 n=n/10;

 }

printf("The digit of number:%d",sum);


return 0;
}
