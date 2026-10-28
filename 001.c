#include<stdio.h>
int main()
{
    int limit,i;
    printf("enter limit");
    //print odd numbers
    scanf("%d",&limit);
    i=1;
    while(i<=limit)
    {
        printf("%d",i);
        i=i+2;
    }
}