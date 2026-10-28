#include<stdio.h>
int main()
{
    int n,i,digit,sum=0;
    printf("enter a number");
    scanf("%d",&i);
    if(i<0)
    {
        i=-i;
    }

    for(;i>0;i=i/10)
    {
        digit=i%10;
        sum=sum+digit;
    }
    printf("sum of digits=%d",sum);
}