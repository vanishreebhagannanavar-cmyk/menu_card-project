#include<stdio.h>
int main()
{
    int i,j,num;
    char ch;
    printf("enter number");
    printf("enter the character");
    scanf("%d",&num);
    scanf("%c",&ch);
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=num;j++)
        {
            printf("%c",ch);
            ch--;
        }
        printf("\n");
    }
}