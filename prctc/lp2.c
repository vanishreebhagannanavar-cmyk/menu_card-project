#include<stdio.h>
int main()
{
    int limit,i;
    //even numbers
    printf("enter a number");
    scanf("%d",&limit);
    for(i=0;i<=limit;i=i+2)
    printf("%d",i);
}