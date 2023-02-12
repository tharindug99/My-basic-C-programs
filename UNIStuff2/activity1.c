#include<stdio.h>

int main(){
    int marks;

    printf("Enter the marks for subject -: ");
    scanf("%d",&marks);

    if(marks < 50){
        printf("\nYour Grade is F ");
    }
    else if(50 <= marks && marks < 60){
        printf("\nYour Grade is D ");
    }
    else if(60 <= marks  && marks < 70){
        printf("\nYour Grade is C ");
    }
    else if(70 <= marks  && marks < 80){
        printf("\nYour Grade is B ");
    }
    else if(80 <= marks  && marks < 90){
        printf("\nYour Grade is A ");
    }
    else if(marks >= 90){
        printf("\nYour Grade is A+ ");
    }

    return 0;
}