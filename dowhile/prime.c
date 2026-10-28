#include<stdio.h>
int main()
{
    int num;
    printf("enter number");
    scanf("%d",&num);
    int flag=0;
    if(num<0)
    {
        printf("invalid input");
    }
    else
    {
    for(int i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("%d is prime number ",num);
    }
    else
    {
        printf("%d is not prime number",num);
    }
}
}