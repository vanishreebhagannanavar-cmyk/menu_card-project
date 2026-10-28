#include<stdio.h>
int main()
{
    int n1=5,n2=5;
    int ret1=n1++;
    int ret2=++n2;
    printf("%d %d\n",n1,n2);
    printf("%d %d\n",ret1,ret2);
}