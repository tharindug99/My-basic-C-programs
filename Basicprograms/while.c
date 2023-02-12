#include <stdio.h>



int main(){

int pizz_opt, final_price,topp_price, pizz_num, top_opt,tot_price, final_top_price = 0;
char  need_top;

printf("Input Pizza option  :");            //type of pizza
scanf("%d", &pizz_opt);

   char pizz_size;
printf("Size of Pizza      :");             // size of pizzas
scanf("%s", &pizz_size);

printf("Number of Pizza     :");           // number of pizzas
scanf("%d", &pizz_num);

switch(pizz_opt){
case 1:
    //Chicken bacon
    switch(pizz_size){
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
            printf("Pls enter valid size !!");
break;
    }
case 2:
    //Tandoori Chicken
    switch(pizz_size){
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
            printf("Pls enter valid size !!");
            }

break;
case 3:
    //Butter Chicken Masala
    switch(pizz_size){
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
            printf("Pls enter valid size !!");
    }
break;
default:
    printf("Please enter valid option !!");
}

final_price = final_price*pizz_num;


restart:
printf("Do you need any extra toppings (y/n) :");
scanf("%s", &need_top);





switch(need_top){
case 'y' :
        printf("Input your option : ");
        scanf("%d", &top_opt);
        switch(top_opt){
        case 1 :
            topp_price = 100;
            break;
        case 2 :
            topp_price = 300;
            break;
        case 3 :
            topp_price = 100;
            break;
        case 4 :
            topp_price = 200;
            break;
        default:
            break;


            }
        final_top_price = final_top_price + topp_price;
            goto restart;

case 'n':
    tot_price = final_price + final_top_price;
    printf("Total Price Rs %d: -", tot_price);

}


return 0;
}
