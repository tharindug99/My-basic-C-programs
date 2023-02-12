#include <stdio.h>
#include <stdlib.h>

int main(){

int num,d2,a;
int i=1;
char c;

restart:  //RESOLVE ZERO ERROR!!!!!

printf("__________________________WELCOME TO CRAPS UNLIMITED !!!!!! VERSION 1.1 CREATED BY TNG________________________________ \n\n ");

printf("Enter the number of dices you want to place bets-: \n");
scanf("%d", &a);

for(int num,q=1;q<=a;q++){
        chum:
    printf("Enter value for dice %d -: \n", q);
    scanf("%d",&num);
    if(num >=1 && num <=6){
         printf("You have entered %d for dice %d \n \n",num,q);
    }
    else{
        printf("Please enter a valid number for dice %d !!!! \n \n", q);
        goto chum; }
}

srand(time(0));
        for(int num,i=1;i<=a;i++){
            for(int j=1;j<=a;j++){
                printf("The result for dice %d is %d \n",j,rand()%6+1);
                if(rand()%6 == num)
                    printf("You Win!!! Congratulations !!! ..\n");
                    else{
                        printf("You Lose!! Game Over.. \n");
                    }
            }
        }


printf("Exit now ? (Y/N) \n");
        scanf("%s",&c);

        if (c == 'n' || c =='N')
            goto restart;


        else(c == 'y' || c == 'Y');
        printf("Good bye \n\n");



return 0;

}
