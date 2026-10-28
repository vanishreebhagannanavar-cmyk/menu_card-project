#include<stdio.h>
int main()
{
    int limit,i;
    printing 1 to 50 numbers without 5 multiplies
    printf("enter limit");
    scanf("%d",&limit);
for(i=1;i<=limit;i++)
{
if(i%5==0)
{
    continue;
}

printf("%d\n",i);
}
}