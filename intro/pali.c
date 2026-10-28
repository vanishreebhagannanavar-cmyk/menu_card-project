#include<stdio.h>
int main()
{
    int n,temp,digit,result;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    digit=0;
    result=0;
    while(n>0)
    {
        result=n % 10;
        digit=digit * 10 + result;
        n=n/10;

    }
    printf("%d",digit);
    if(temp==digit)
    {
        printf("num is a palindrome");

    }
    else 
    printf("num is not a palindrome");
}