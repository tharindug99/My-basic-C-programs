#include<stdio.h>

int main(){

char firstname[45],lastname[45];
char phonenum[20],Date_of_birth[10];
printf("Enter your first name-:");
scanf("%s", &firstname);
printf("Enter your last name-:");
scanf("%s", &lastname);
printf("Your full name is %s %s", &firstname,&lastname);
printf("\nEnter your phone number-:");
scanf("%s",&phonenum);
printf("Your phone number is %s", &phonenum);
printf("\nEnter your Date of Birth-:");
scanf("%s",&Date_of_birth);
printf("Date of birth is %s", &Date_of_birth);

return 0;

}
