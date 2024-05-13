int main()
{
int  cp, sp ,loss,profit;

printf("enter the value of cp:");
scanf("%d",&cp);

printf("enter the value of sp:");
scanf("%d",&sp);

if(cp>sp)
{
loss=cp-sp;
}

printf("this incure is loss %d:",loss);

if(sp>cp)
{
profit=sp-cp;
}

printf("this incure is profit %d:",profit);

return 0;
}
