#include<stdio.h>             //Exercise 7 -- 28/10/2021 --  IS1103

int main(){

    char letter;

    printf("Enter the letter -: ");
    scanf("%c",&letter);

    if((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z')){

        if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U'){
        printf("The letter is a vowel");
        }
        else{
        printf("The letter you have entered is a consonant");
        }
    }
    else{
        printf("The letter is not a vowel or a consonant");
    }
    return 0;
}