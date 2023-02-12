#include <stdio.h>
#include <string.h>
#include <ctype.h>

int toupper();

void main(){

char name[80];
    int loop;
    printf ("Please type in your name\n");
    gets(name);
    for (loop=0; name[loop] !=0; loop++)
    name[loop] = toupper(name[loop]);
    printf ("You are %s\n",name);

stringcopy();



}







int stringcopy(){



char s1[50],s2[100],s3[20];


//printf("You are are a %s", s1);

printf("Pls enter the first name -:");
scanf("%s", &s3);
strcpy(s1, s3);
printf("Pls enter the middle name -:");
scanf("%s", &s2);
strcpy(s1, s2);


printf("%s",s1);

return 0;
}
