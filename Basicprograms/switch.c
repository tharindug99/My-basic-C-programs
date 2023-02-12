#include <stdio.h>

int main () {

int food_opt;

restart:
printf("The Foodshop \n 1.Pizza\n 2.Noodles\n 3.Koththu\n 4.Rice\n 5.Lasagna\n Enter your choice number-:  ");
scanf("  %d", &food_opt);



   switch(food_opt) {
      case 1 :
         printf("You have chosen Pizza!!\n" );
         break;
      case 2 :
          printf("You have chosen Noodles!!\n" );
         break;
      case 3 :
         printf("You have chosen Koththu!!\n" );
         break;
      case 4 :
         printf("You have chosen Rice!!\n" );
         break;
      case 5 :
         printf("You have chosen Lasagna!!\n" );
         break;
      default :
         printf("Invalid Option please try again!!\n" );
         goto restart;
   }



    return 0;
}
