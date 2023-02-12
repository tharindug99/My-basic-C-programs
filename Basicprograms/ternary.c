#include <stdio.h>

int main(){

int grade;

printf("Enter yo grade(0-100 :)");
scanf("%d", &grade);
printf("the computer says you :");
printf("%s\n",(grade >= 0 && grade <=35) ? "Passed!" : "Failed");
return 0;


}
