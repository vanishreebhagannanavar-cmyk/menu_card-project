#include<stdio.h>
int main()
{
    int i;
    for(i=10;i>=1;i--)
    {
    printf("%d\n",i);
    if(i==3)
    break;
    }
}