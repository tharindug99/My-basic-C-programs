#include<stdio.h>

int main(){

    int m1,m2;
    printf("Enter marks student 1 -:");
    scanf("%d",&m1);
    printf("Enter marks student 2 -:");
    scanf("%d",&m2);

    if(m1 > m2){
        printf("\nStudent 1 has got higher marks");

    }
    else{
        printf("\nStudent 2 has got higher marks");
    }


    return 0;
}