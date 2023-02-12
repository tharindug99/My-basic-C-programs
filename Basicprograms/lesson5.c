#include <stdio.h>
#include<string.h>
void main(){

//string functions

char s1[50];
char s2[50];
char s3[50];

printf("\n Enter the first string -:");
scanf("%s",&s1[50]);

printf("\n Enter the second string -:");
scanf("%s",&s2[50]);

printf("\n\n%s",&s1[50]);

strcat(s2,s1);

printf("\nThe concatenated string is %s", s2[50]);

}
