#include<stdio.h>
int main()
{
    int limit,i,num;
    printf("enter limit:");
    scanf("%d",&limit);
    //natural numbers in decreasing order
    for(i=limit;i>0;i=i-1)
    {
        printf("%d",i);
    }
} 