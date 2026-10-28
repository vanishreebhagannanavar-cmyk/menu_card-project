#include<stdio.h>
int main()
{
    int n,digit,flag=0;
    printf("enter a number");
    scanf("%d",&n);
    
    while(n>0)
    {
        digit=n%10;
        if(digit==0)
        {
            flag=1;
            break;
        }
        n=n/10;
    }
    if(flag==1)
    {
        printf("duck number");
    }
    else
    {
        printf("not a duck number");
    }
}