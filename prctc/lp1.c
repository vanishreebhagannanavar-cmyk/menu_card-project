#include<stdio.h>
int main()
{
    int n,i;
    //decreasing natural numbers
    printf("enter number");
    scanf("%d",&n);
    for(i=n;i>0;i=i-1)
     printf("%d",i);
}