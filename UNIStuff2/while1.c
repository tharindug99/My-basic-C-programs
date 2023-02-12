#include<stdio.h>

int main(){

    int num;
    printf("\nEnter a number -: ");
    scanf("%d",&num);

    while (num%2 == 0)
    {   
        printf("\nYou have entered an even number please try again !!!");
        //printf("\nEnter a number -: ");
        //scanf("%d",&num);
        return main();
    }
    
    printf("%d is an odd number",num);

    return 0;
}