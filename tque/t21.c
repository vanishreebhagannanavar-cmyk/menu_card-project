#include<stdio.h>
int main(){
    int num,n,res;
    res=0;
    printf("enter anumber:");
    scanf("%d",&n);
    for(;n>0;n=n/10)
    {
        num=n%10;
        res=res*10+num;
    }    
        printf("Reverse number is %d",res);

}