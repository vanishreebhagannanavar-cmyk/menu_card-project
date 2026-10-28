#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("enter number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%3==0)
        {
            count++;
        
        }
    }
               printf("%d ",count);
           

}