#include<stdio.h>
int main()
{
    int limit,i,mup,num;
    //6 multiplication
    printf("enter a limit");
    scanf("%d",&limit);
    for(i=1;i<=10;i++)
    {
        mup=i*limit;
        printf("%d x %d=%d\n",limit,i,mup);
    }
}