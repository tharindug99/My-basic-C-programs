#include <stdio.h>
#include <conio.h>

int addnum(int num1, int num2);
int subnum(int num1, int num2);
int multipynum(int num1, int num2);
int dividenum(int num1, int num2);
int remainder(int num1, int num2);

int main(){

int num1,num2;
char choice;

printf("Enter the two numbers \n");
printf("\nEnter number 1 -: ");
scanf("%d", &num1);
printf("\nEnter number 2 -: ");
scanf("%d", &num2);

addnum(num1,num2); printf("\n");
subnum(num1,num2);    printf("\n");
multipynum(num1,num2);    printf("\n");
dividenum(num1,num2); printf("\n");
remainder(num1,num2); printf("\n");

printf("\nDo you want to exit (y/n)");
scanf("%s",&choice);

if(choice == 'n'){
    printf("\n\n");
    main();
}
else

return 0;
}

int addnum(int num1, int num2){

printf("\nThe sum is %d", num1+num2);
return num1 + num2;
}

int subnum(int num1, int num2){

printf("\nThe difference is %d", num1-num2);
return num1 - num2;
}

int multipynum(int num1, int num2){

printf("\nThe product is %d", num1*num2);
return num1 * num2;
}

int dividenum(int num1, int num2){

printf("\nThe quotient is %d", num1/num2);
return num1 / num2;
}

int remainder(int num1, int num2){

printf("\nThe remainder is %d", num1%num2);
return num1 % num2;
}
