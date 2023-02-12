 #include <stdio.h>
 #include <ctype.h>
 #include<conio.h>

 int main(){

 char a;
 while( a != 13){
    printf("\n\nPlease Enter a Character....");
    scanf("%c",&a );
    if(isalnum(a)){
        if(isupper(a)){
            printf("\nOk, You have entered an uppercase letter ");}
        else if(islower(a)){
            printf("\n Ok this is a lowercase letter");}
    else
        printf("Ok this is a number");

    }
    else if(isspace(a)){
        if (a == 32)
            -
    }



 }






 return 0;
 }
