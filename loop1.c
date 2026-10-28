#include<stdio.h>
int main()
{
    int limit,i;
    printf("enter limit");
    scanf("%d",&limit);
    //decreasing even natural numbers
    for(i=limit;i>0;i=i-2)
    {
            if(limit%2==0)
            printf("%d ",i);
    }
}