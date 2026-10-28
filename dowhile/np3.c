#include<stdio.h>
int main()
{
    int i,j,num;
    char ch='A';
    printf("enter number");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=num;j++)
        {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
}