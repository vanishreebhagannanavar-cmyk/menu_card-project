#include<stdio.h>
int main()
{
    int sum,limit,i;
    //sum of natural numbers
    printf("enter limit");
    scanf("%d",&limit);
    sum=0;
    for(i=1;i<=limit;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}