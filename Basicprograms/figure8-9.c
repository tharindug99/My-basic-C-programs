#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define ASK(prompt,response) fputs(prompt,stdout);(fgets(response,sizeof(response),stdin));
#define SIZE 100

struct employee{
    char name[30+1];
    char dept [4+1];
    int tp[10+1];
    float pay_rate;
};

char string[100];
void read_info(struct employee);
void display_info(struct employee);
void menu();

int main(){

menu();
return 0;

}

void menu(void){

static struct employee employee_record[SIZE];
printf("\n 1. Add an record. \n 2. List Employee Records. \n 3. Exit");
ASK(" \nPress your opinion number :",string)
switch(string[0]){
case '1':
    read_info(employee_record);
    break;
case '2':
    display_info(employee_record);
    break;
case '3':
    exit(0);
default:
    menu();

    }
    menu();





}









