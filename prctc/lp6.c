#include<stdio.h>
int main()
{
    int limit,sum,i;
    printf("enter limit");
    scanf("%d",&limit);
    sum=0;
    for(i=1;i<=limit;i++)
    {
        sum=sum+i;
    }
        printf("%d\n",sum);
    
    
}