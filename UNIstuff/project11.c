#include <stdio.h>

int main(){

    int a = 1;

    if (a){
        printf("true");
    }
    else{
        printf("false");
    }

    int age = 18;
    int havemoney = 0;
    int havecard = 1;
    float thirst = 0.31;
    int after = 1;
    int result;

    result = age >= 18 && (havemoney || havecard) && thirst > 0.3 && after;
    printf("\nResult is %d ",result);



    return 0;
}