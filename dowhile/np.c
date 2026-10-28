#include<stdio.h>
int main()
{
    int i,j;
    char ch;
    printf("enter the character: ");
    scanf("%c",&ch);
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=10;j++)
        {
            printf("%c ",ch);
        }
        printf("\n");
    }
}