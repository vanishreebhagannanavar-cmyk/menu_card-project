#include<stdio.h>
int main()
{
    int limit,i,result;
    printf("enter a limit");
    scanf("%d",&limit);
    //power of two series
    result=1;
    for(i=1;i<=limit;i++)
    {   
        result=result*2;
        printf("%d ",result);
    }
}