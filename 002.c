#include<stdio.h>
int main()
{
    int limit,i;
    printf("enter limit");
    scanf("%d",&limit);
    i=limit;
    if(i%2==0)
    while(i>=1)
    {
        printf("%d\n",i);
        i=i-2;
    }
}