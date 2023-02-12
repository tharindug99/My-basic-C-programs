#include<stdio.h>
int main()
{

int numofpeop, numofpieces;

printf("|Pizza   Size  |\t  Cost |\t number of slices |\n");
printf("|    5 inch    |\t   $3  |\t      4           |\n");
printf("|    7 inch    |\t   $5  |\t      6           |\n");
printf("|    10 inch   |\t   $8  |\t     10           |\n");
printf("|    15 inch   |\t  $12  |\t     15           |\n");
printf("|    24 inch   |\t  $18  |\t     24           |\n");


printf("Pls enter the number of people -:");
scanf("%d",&numofpeop);
if(numofpeop>0 && numofpeop<1000000000){
    printf("You have requested for %d persons \n", numofpeop);
}
else
    printf("Pls enter a value between 1 and 999,999,999 \n");


printf("Pls enter the slices per person -:");
scanf("%d",&numofpieces);

if(numofpieces>0 && numofpieces<11){
    printf("You have requested for %d persons \n", numofpeop);
}
else
  printf("Pls enter a value between 1 and 10 \n");

int x;

x=numofpeop*numofpieces;

printf("total number of slices is %d", x);

//price per slice of 5 inch =  $0.75
//price per slice of 7 inch  = $0.83
//price per slice of 10 inch = $0.8
//price per slice of 15 inch = $0.8
//price per slice of 24 inch = $0.75

}
