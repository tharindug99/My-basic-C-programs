#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int no_of_employees;

int salaryrecords[50];
char employee_names[50][10];

int salarychecker();



int main(){

    printf("Enter the number of employees (1-50)-: ");
    scanf("%d",&no_of_employees);

    if (no_of_employees <= 50)
    {
       int avg = salarychecker(); 
    }
    else
    {   
        printf("Please enter a value between 1 and 50!!!\n");
        return main();
    }
    
    
    
    
    return 0;
}

int salarychecker(){

    int average = 0, total_salary = 0;
    for (int i = 0; i < no_of_employees; i++)
    {
        printf("\nEnter the employee name %d -: ",i+1);
        scanf("%s",&employee_names[i]);
        printf("Enter the salary of employee %d -: ",i+1);
        scanf("%d",&salaryrecords[i]);
        int temp = salaryrecords[i];
        total_salary = temp + total_salary;

    }

 

    average = total_salary/no_of_employees;
    printf("\nThe average is %d",average);
    for (int i = 0; i < no_of_employees; i++)
    {
        if (salaryrecords[i] < average)
        {
            printf("\n%s has below the average salary ",employee_names[i]);
        }
        else
        {
             printf("\n%s has higher salary ",employee_names[i]);
        }
        

    }
    

    return average;
}

