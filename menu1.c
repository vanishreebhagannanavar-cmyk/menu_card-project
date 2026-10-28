#include<stdio.h>
int main()
{
   int option,quantity,totalamount,finalamount,price,payment;
   int GST;
   totalamount=0;
   printf("<----------------------Welcome to Joy Cafe------------------\n>");
   printf("\n1.Burger=70\n2.Sandwich=100\n3.Pizza=250\n4.Icecream=50\n5.Shake=80\n");
   printf("0.Exit\n");
   for(;;)
   {
   printf("\nenter your option\n: ");
   scanf("%d",&option);
   if(option==0)
   {
    break;
   }
   price=0;
   switch(option)
   {
    case 1:
    price=70;
    printf("\nBurger is added to your cart\n");
    break;
    case 2:
    price=100;
    printf("Sandwich is added to your cart\n");
    break;
    case 3:
    price=250;
    printf("Pizza is added to your cart\n");
    break;
    case 4:
    price=50;
    printf("Icecream is added to your cart\n");
    break;
    case 5:
    price=80;
    printf("Shake is added to your cart\n");
    break;
   }
   printf("\nenter quantity: \n");
   scanf("%d",&quantity);
   if(quantity==0)
   {
    printf("invalid input");
    continue;
   }
   totalamount=totalamount+quantity*price;
        printf("%d*%d  %d*%d\n",quantity,option,quantity,price);
}

printf("Total Amount=%d\n",totalamount);
        GST=totalamount*18/100;
        printf("GST=18%%\n");
        finalamount=totalamount+GST;
        printf("Final Amount=%d\n",finalamount);
        printf("Select your Payment Method");
printf("\n1.Online\n2.Credit Card\n3.Cash\n: ");
printf("enter your payment option: ");
scanf("%d",&payment);
switch(payment)
{
    case 1:
    printf("you selected Online");
    break;
    case 2:
    printf("you selected Credit Card");
    break;
    case 3:
    printf("you selected Cash");
    break;
    default:
    printf("invalid option");
    break;
}


}