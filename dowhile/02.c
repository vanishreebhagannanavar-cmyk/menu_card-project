#include<stdio.h>
int main()
{
int limit,n=1;
printf("enter the limit: ");
scanf("%d",&limit);
label:
printf("%d ",n++);
if(n<=limit)
goto label;
}
