#include <stdio.h>
#include <stdlib.h>

int main(){

int d1,d2,a;
int i=1,j=2;
char c;


chum:

printf("Enter the number of dices you want to place bets-: ");
scanf("%d", &a);
printf("Please enter your bet for dice 1(1-6) :");
scanf("%d",&d1);
if ((d1 >= 1 ) && (d1 <= 6)){
    printf("You have entered %d as bet for dice 1 \n", d1);}
else{
        printf("Please enter a valid value !!!! \n");
        goto chum;}

wer:
    printf("Please enter your bet for dice 2(1-6) :");
    scanf("%d",&d2);
    if ((d2 >= 1 )&&( d2 <= 6)){
    printf("You have entered %d as bet for dice 2 \n", d2);}
    else{
        printf("Please enter a valid value !!!! \n");
        goto wer;}

        srand(time(0));
        for(int i=1;i<2;i++);{

            printf("The result for dice %d is %d \n", i,rand()%6);
        }


        for(int j=2 ;j<3 ;j++ );{
                    printf("The result for dice %d is %d \n", j,rand()%6);
                }

        printf("Exit now ? (Y/N)");
        scanf("%s",&c);

        if (c == 'n' || c =='N')
            goto chum;


        else(c == 'y' || c == 'Y');
        printf("Good bye");
        return 0;









}
