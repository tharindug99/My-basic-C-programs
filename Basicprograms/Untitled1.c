#include <stdio.h>

void days(){

int num_days,rem_days;

printf("\n\n\n\n\nInput the number of days -:");
scanf("%d", &num_days);

if(num_days > 0){
        int num_year = num_days / 365;
            rem_days = num_days % 365;
            printf("%d year(s)", num_year);

        int num_months = rem_days / 30;
             rem_days = rem_days % 30;
            printf("\n%d Month(s)", num_months);

        int days_ = rem_days;

            printf("\n%d  Day(s)", days_);

}


}
int main(){

int amount,bal,num_100,num_50,num_20,num_10;

printf("Input the amount -:");
scanf("%d", &amount);

    if(amount > 0){
            num_100 = amount / 100;
            bal = amount % 100;
            printf("%d Note(s) of 100.00", num_100);

            num_50 = bal / 50;
             bal = bal % 50;
            printf("\n%d Note(s) of 50.00", num_50);

            num_20 = bal / 20;
             bal = bal % 20;
            printf("\n%d Note(s) of 20.00", num_20);

            num_10 = bal / 10;
             bal = bal % 20;
            printf("\n%d Note(s) of 10.00", num_10);

           int num_5 = bal / 5;
             bal = bal % 5;
            printf("\n%d Note(s) of 5.00", num_5);

           int num_2 = bal / 2;
             bal = bal % 2;
            printf("\n%d Note(s) of 2.00", num_2);

           int num_1 = bal / 1;
             bal = bal % 1;
            printf("\n%d Note(s) of 1.00", num_1);
        }


days();

return 0;

}
