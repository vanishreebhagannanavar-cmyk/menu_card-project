#include<stdio.h>
int main()
{
    int n,i;
    int fact=1;
    printf("enter a number");
    scanf("%d",&n);
    //factorial numbers
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
        printf("%d",fact);


}