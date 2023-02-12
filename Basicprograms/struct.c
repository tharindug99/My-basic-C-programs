#include <stdio.h>
#include <conio.h>

#define ASK(prompt,response)  puts(prompt); gets(response)
int main(){

struct employee{
    char name;
    char department;
    int empid;
    float payrate;

}employee_record;

ASK("Employee Name:  ",&employee_record.name);
ASK("\nEmployee Department: ",&employee_record.department);
ASK("\nEmployee ID :",&employee_record.empid);
ASK("\nPayrate: ",&employee_record.payrate);

//print user data

printf("\n --Employee Information--");
printf("\n Name: %s",employee_record.name);
printf("\n Department (xxx): %s",employee_record.department);
printf("\n ID (#####): %d",employee_record.empid);
printf("\n Payrate: %f",employee_record.payrate);
printf("\n Yo salary %f",(20*1.5));










}

