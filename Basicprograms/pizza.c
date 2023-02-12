#include<stdio.h>

int main()
{
    int pizzaoption = 0;
    int totalprize = 0;
    int numberpizza = 0;
    char sizepizza;
    char extratopping ;
    int option = 0;


while(1){
    printf("Input Pizza Option : ");
    scanf("%d",&pizzaoption);
    if (pizzaoption != 1 && pizzaoption !=2 && pizzaoption !=3){
        printf("Invalid input! Try Again..........");
        break;
    }

    printf("Size of the Pizza : ");
    scanf(" %c", &sizepizza);

    if(pizzaoption == 1 && sizepizza == 'L'){
        totalprize = totalprize + 1600;
    }else if(pizzaoption == 1 && sizepizza == 'M'){
        totalprize = totalprize + 900;
    }else if(pizzaoption == 1 && sizepizza == 'P'){
        totalprize = totalprize + 500;
    }else if(pizzaoption == 2 && sizepizza == 'L'){
        totalprize = totalprize + 1700;
    }else if(pizzaoption == 2 && sizepizza == 'M'){
        totalprize = totalprize + 800;
    }else if(pizzaoption == 2 && sizepizza == 'P'){
        totalprize = totalprize + 600;
    }else if(pizzaoption == 3 && sizepizza == 'L'){
        totalprize = totalprize + 2000;
    }else if(pizzaoption == 3 && sizepizza == 'M'){
        totalprize = totalprize + 1000;
    }else if(pizzaoption == 3 && sizepizza == 'P'){
        totalprize = totalprize + 800;
    }else{
        printf("Invalid input! Try again........");
        break;
    }

    printf("Number of Pizza :");
    scanf("%d",&numberpizza);
    totalprize = totalprize*numberpizza;

    do{
        printf("Do you need any extra toppings(y/n) : ");
        scanf(" %c", &extratopping);
        if(extratopping == 'y' || extratopping == 'Y'){
            printf("input your option :");
            scanf("%d",&option);
            if (option == 1){
                totalprize = totalprize + 100;
            }else if(option == 2){
                totalprize = totalprize + 300;
            }else if(option == 3){
                totalprize = totalprize + 100;
            }else if(option == 4){
                totalprize = totalprize + 200;
            }else{
                printf("Invalid input! Try again........");
                break;
            }
        }
    }while(extratopping == 'y' || extratopping == 'Y');

    if (option != 1 && option !=2 && option !=3 && option !=4){
        break;
    }

    printf("Total prize  Rs :- %d", totalprize);

    if(extratopping == 'n' || extratopping == 'N'){
        break;
    }
}
}
