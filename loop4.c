#include<stdio.h>
int main()
{
    int n1,n2,i,sum;
    printf("enter two numbers");
    scanf("%d%d",&n1,&n2);
    for(i=0;i<n1;i++)
    {
        sum=sum+n2;
    }
    printf("sum=%d\n",sum);
}