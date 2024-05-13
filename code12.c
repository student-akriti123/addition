#include<stdio.h>
int main()
{
 int area,perimeter,len,bre;
printf("enter the  value of len:");
scanf("%d",&len);

printf("enter the  value of bre:");
scanf("%d",&bre);

//formula

area=len*bre;
perimeter=2*(len+bre);

if(area>perimeter)
{
 printf("area is greater than perimeter  ");

}


 else
{
 printf(" perimeter is greater than  area ");
}

return 0;
}
