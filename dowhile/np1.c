#include<stdio.h>
int main()
{
    int i,j,lines;
    printf("enter number of lines");
    scanf("%d",&lines);
    for(i=1;i<=lines;i++)
    {
        for(j=1;j<=lines;j++)
        {
        printf("%d ",j);
        }
        printf("\n");
    }
}