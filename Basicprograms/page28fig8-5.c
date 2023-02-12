#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define ASK(x,y) puts(x); gets(y);

void hold_it();

int main(){



struct employee{
    char name[30+1];
    char dept [4+1];
    int tp[10+1];
    float pay_rate[];
};
struct employee employee_record;

ASK("Employee Name :",employee_record.name);
ASK("Employee Department :",employee_record.dept);
ASK("Employee Telephone No. :",employee_record.tp);
ASK("Employee PayRate :",employee_record.pay_rate);
printf("-----Employee Information----- \n EMPLOYEE NAME-:%s",employee_record.name);
printf(" \n EMPLOYEE DEPARTMENT -:%s",employee_record.dept);
printf("\n EMPLOYEE TELEPHONE NUMBER-:%s",employee_record.tp);
printf("\n EMPLOYEE PAY RATE-:%s",employee_record.pay_rate);

hold_it();

return 0;
}

void hold_it(){
printf(" \n \nPress any key to continue....");

}




