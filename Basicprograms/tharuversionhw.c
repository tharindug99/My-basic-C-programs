#include<stdio.h>
  int main(void){

  int pizza_opt,Num_pizza,top_opt,top_price;
  int final_price,total_price;
  char size_pizza,N_top;
  int final_top_price=0;


    printf("Enter the pizza option-");
    scanf("%d",&pizza_opt);

    printf("How many pizza do you want?");
    scanf("%d",&Num_pizza);

    printf("Enter the size of pizza-");
    scanf("%s",&size_pizza);

    switch(pizza_opt){
    case 1:
       //chicken bacon
       switch(size_pizza){
           case 'P':
            final_price=500;
            break;
           case 'M':
            final_price=900;
            break;
           case 'L':
            final_price=1600;
            break;
           default:
            printf("ERROR");

       }
       break;

     case 2:
        //Tandoori chicken
        switch(size_pizza){
           case 'P':
             final_price=600;
             break;
           case 'M':
             final_price=800;
             break;
           case 'L':
            final_price=1700;
            break;
           default:
            printf("ERROR");
        }
        break;

     case 3:
         //Butter chicken masala
         switch(size_pizza){
           case 'P':
             final_price=800;
             break;
           case 'M':
             final_price=1000;
             break;
           case 'L':
             final_price=2000;
             break;
           default:
            printf("ERROR");
         }
         break;
           default:
            printf("ERROR");
    }
        final_price=final_price*Num_pizza;
        printf("final price is-%d\n",final_price);

    while (N_top !='n') {
        printf("Do you need any toppings?(y/n)-");
        scanf("%s",&N_top);



    switch(N_top){
     case 'y':
       printf("input option-");
        scanf("%d",&top_opt);

       switch(top_opt){
         case 1:
             top_price=100;
             break;
         case 2:
            top_price=300;
            break;
         case 3:
            top_price=100;
            break;
         case 4:
            top_price=200;
            break;
         default:
            break;
    }
         default:
            break;
    }
    }

     final_top_price=final_top_price+top_price;

     printf("topping price is=%d\n",final_top_price);



    total_price=final_price+final_top_price;
    printf("total price is=%d\n",total_price);


    printf("ENJOY YOUR PIZZA!!!");
    }
