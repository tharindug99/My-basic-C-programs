#include<stdio.h>
#include<dos.h>
#include<conio.h>
int main(){

struct date d ;

getdate(&d);

printf("Current sysytem date : %d/%d/%d", d.da_day,d.da_month,d.da_year);






return 0;
}
