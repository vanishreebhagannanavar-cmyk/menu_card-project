#include<stdio.h>
int main()
{
    int quantity,price,totalamount,finalamount,option,choice;
    double GST;
    int Pizza,Burger,Sandwich,Shake;
    totalamount= 0;
    printf("<------- Welcome to Joy cafe------->\n");
    
    printf("\nBurger\n 1.Paneer Burger=70\n2.Veg Burger=60\n3.Cheese Burger=80\n");
    printf("\nSandwich\n1.Corn Sandwich=100\n2.Paneer Sandwich=100\n3.Veg Sandwich=80\n ");
    printf("\nShake\n1.Chocolate shake=80\n2.Strawberry shake=70\n3.Mango Shake=70\n4.Cold coffe=40\n");
    printf("\nPizza\n1.Margheritta Pizza=250\n2.Chicken Pizza=270\n3.Paneer Pizza=200\n");
    printf("\nIcecream\n1.Chocolate=60\n2.Strawberry=50\n3.Mango=50\n4.Vanilla=40\n");
    for(;;)
    {
      printf("1.Burger\n");
      printf("2.Sandwich\n");
      printf("3.Shake\n");
      printf("4.Pizza\n");
      printf("5.Icecream\n");
      printf("enter your choice\n");
    scanf("%d",&choice);
    if(choice==0)
    {
      break;
    }
    switch(choice)
    {
      case 1:
      printf("\n1.Paneer Burger-70\n");
      printf("\n2.Veg Burger-70\n");
      printf("\n3.Cheese Burger-70\n");
      break;
      case 2:
      
    }

      printf("enter your option:\n");
        scanf("%d",&option);
        printf("enter your quantity:\n");
        scanf("%d",&quantity);
        switch(choice)
        {
          case 1:                                                        
          switch(option)
        {
        case 1:
        price=70;
        printf("Paneer Burger is added to your cart\n");
        break;
        case 2:
        price=70;
        printf("Veg Burger is added to your cart\n");
        break;
        case 3:
        price=80;
        printf("Cheese Burger is added to your cart\n");
        break;
        default:
        printf("invalid option");
        }
        case 2:
          switch(option)
          {
          case 1:
          price=100;
          printf("Corn Sandwich is added to your cart\n");
          break;
          case 2:
          price=100;
          printf("Paneer Sandwich is added to your cart\n");
          break;
          case 3:
          price=80;
          printf("Veg Sandwich is added to your cart\n");
          break;
        }
        case 3:
          switch(option)
          {
          case 1:
          price=80;
          printf("Chocolate Shake is added to your cart\n");
          break;
          case 2:
          price=70;
          printf("Strawberry Shake is added to your cart\n");
          break;
          case 3:
          price=70;
          printf("Mango Shake is added to your cart\n");
          break;
          case 4:
          price=40;
          printf("Cold Coffe is added to your cart\n");
          break;
          }
          case 4:
          switch(option)
          {
          case 1:
          price=250;
          printf("Margheritta Pizza is added to your cart\n");
          break;
          case 2:
          price=270;
          printf("Chicken Pizza is added to your cart\n");
          break;
          case 3:
          price=200;
          printf("Paneer Pizza is added to your cart\n");
          }
      
      }
       totalamount=totalamount+quantity*price;
        printf("%d*%d  %d*%d\n",quantity,option,quantity,price);

    }
      printf("Total Amount=%d\n",totalamount);
        GST=totalamount*18/100;
        printf("GST=18%%\n");
        finalamount=totalamount+GST;
        printf("Final Amount=%d\n",finalamount);

    

}