#include <stdio.h>   //Exercise 6 -- 28/10/2021 --  IS1103

int main(){

    int age;

    printf("Anter your age -: ");
    scanf("%d", &age);

    
    if(age > 18 ){
       
        if(age <= 50){
            printf("\nYou are eligible for work !!");
        }
        else{
            printf("\nYour age is not satisfactory according to work norms !!");
        }
    }
    else{
            printf("\nYou are not fit for working");
        }


    return 0;
}