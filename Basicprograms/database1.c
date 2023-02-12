#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define ASK(x,y) puts(x); gets(y);
#define SIZE 100
void hold_it();
void datacap(struct employee *);
void datagive(struct employee *);

struct employee{
    char name[30+1];
    char dept [4+1];
    int tp[10+1];
    float pay_rate[];
};
struct employee employee_record;


char string[100];
void reading(struct employee *);
void display(struct employee *);


int main(){



int choi;
yer:
printf("1. ADD A RECORD. \n2. LIST AN EMPLOYEE RECORD.\n3. EXIT \nPress an option number....");
scanf("%d",choi);

if(choi == '1'):
    datacap();
    else if(choi == '2')
        datagive();

return 0;
}

void datacap()   {


ASK("Employee Name :",employee_record.name);
ASK("Employee Department :",employee_record.dept);
ASK("Employee Telephone No. :",employee_record.tp);
ASK("Employee PayRate :",employee_record.pay_rate);
printf("-----Employee Information----- \n EMPLOYEE NAME-:%s",employee_record.name);
printf(" \n EMPLOYEE DEPARTMENT -:%s",employee_record.dept);
printf("\n EMPLOYEE TELEPHONE NUMBER-:%s",employee_record.tp);
printf("\n EMPLOYEE PAY RATE-:%s",employee_record.pay_rate);
}

void datagive(){

int i;
printf("Employee Information:\n");
line();
for(i=0; i<SIZE; i++){
    if(employee_record[i].name[0] < 100 && employee_record[i].name[0] > 0){
        printf("\nEmployee %d\nName:%sDepartment:%sTelephone number:%sPay Rate:.2%f/hr.\n",
               i,
               employee_record[i].name
               employee_record[i].dept
               employee_record[i].tp
               employee_record[i].pay_rate);
               line();}
}

}



