#include<stdio.h>
int main()
{
    int num;
    printf("enter number");
    scanf("%d",&num);
    int temp=num;
    int res=0;
    while(num>0)
    {
        res=num%10+res*10;
        num=num/10;
    }
    printf("reverse number is %d",res);
    if(res==temp)
    {
        printf("palindrome");
    }
    else
    {
     printf("not");
    }
}