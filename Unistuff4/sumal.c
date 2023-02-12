#include <stdio.h>

double averageSalary(double salaries[], int amount);
void empHighSal(double salaries[], char employees[][100],double average,int amount);
void empLowSal(double salaries[], char employees[][100],double average,int amount);



int main(){

    char employees[50][100];
    double salaries[50];

    int amount; // Amount of the employees

    printf("Enter the amount of employees: ");
    scanf("%d", &amount);

    for (int i = 0; i < amount; i++)
    {
        
        printf("Enter employee name: ");
        scanf("%s", employees[i]);
        printf("Enter employee salary: ");
        scanf("%lf", &salaries[i]);

        
        
    }

    /* To find the average. */
    double average =  averageSalary(salaries,amount);

    /* Employees with lower salaries than average. */
    empLowSal(salaries, employees, average, amount);

    /* Employees with higher salaries than average. */
    /* empHighSal(salaries, employees, average, amount); */

    return 0;
}


double averageSalary(double salaries[],int amount){
    double sum = 0;
    for (int k = 0; k < amount;k++){
        sum += salaries[k];
    }
    double average = sum / amount;
    printf("\n=====================================\n");
    printf("The average is: %lf\n", average);
    printf("=====================================\n");
    return average;
}

/* void empHighSal(double salaries[], char employees[][100], double average, int amount){
    for (int n = 0; n < amount;n++){
        if()
    }
} */

void empLowSal(double salaries[], char employees[][100], double average, int amount){
    printf("=====================================\n");
    printf("=== Employees with lower salaries ===\n");
    printf("=====================================\n");

    for (int n = 0; n < amount; n++)
    {
        if(salaries[n] < average){
            printf("%s, ", employees[n]);
        }
    }
    printf("\n\n");
}