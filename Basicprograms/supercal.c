#include<stdio.h>
#include<conio.h>

int main()
{
    int score;
    char choice;

    table:


    printf("Enter your score-:");
    scanf("%d", &score);
    if((0<=score) &&  (score<35))
    {
    printf("Yo failed");
    }
    else if((35<=score) && (score<55))
    {
    printf("You have got an S pass");
    }
    else if((55<= score) && (score<65))
    {
    printf("You have got an C pass");
    }
    else if((65<= score) && (score<75))
    {
    printf("You have got an B pass");
    }
    else if((75<=score) && (score<=100))
    {
    printf("You have got an A pass");
    }
    else{
    printf("Pls enter valid score");
    }

    printf(" \n Do you want to exit? (y/n)");
    scanf("%s",&choice);

    if(choice =='n')
    goto table;

    getch();
    return 0;
}
