#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define MAXNAME  40+1
#define MAXPHONE 14+1
#define FNAME     "phones.dat"
#define LF         "\n"
#define DONE      1
#define BUFR      80
#define ASK(prompt,response)  fputs(prompt,stdout); gets(response)

void menu(void);                //define prototypes for functions
void write_rec(char[],char[]);
void file_item(char[]);
void display_info(char[],char[]);

FILE*fp;

void main(){

menu();
}


//End of the main menu -----------------
//function of the menu -----------------


void menu(void){

static char name[MAXNAME], phone[MAXPHONE];
int option, i;

for(i=0; i <=24; i++)
    printf("\n");
printf("............MENU............");
printf("\n\n 1.Add records to the file");
printf("\n\n 2.Display file information");
printf("\n\n 3.Exit");
printf("\n\n press the required number \n\n");
option = getchar();
switch(option){
 case'1':
    fp=fopen(FNAME, "a");
    while (getinfo(name,phone) != NULL)
        write_rec(name,phone);
    fclose(fp);
    break;

 case'2':
     fp=fopen(FNAME, "r");
    while (read_rec(name,phone) != EOF)
        display_info(name,phone);
    fclose(fp);
    break;

}

}
