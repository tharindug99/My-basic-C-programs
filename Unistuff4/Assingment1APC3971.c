#include<stdio.h>

int no_of_employees = 0;

int salaryrecords[50];
char employee_names[50][100];


int salarychecker();



int main(){

    int k;

    printf("Enter the number of employees (1-50)-: ");   //get the amount of employees required to enter the data
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

int salarychecker(){          //this function will evaluate the salary

    
    int  total_salary = 0, i=0 ;
    for (int i = 0; i < no_of_employees; i++)
    {
        printf("\nEnter the employee name %d -: ",i+1);
        scanf("%s",&employee_names[i]);
        printf("Enter the salary of employee %d -: ",i+1);
        scanf("%d",&salaryrecords[i]);
        int temp = salaryrecords[i];
        total_salary = temp + total_salary;


    }
    float tot_sal = (float)(total_salary);
    float num_emp = (float)(no_of_employees);
 

    float average = tot_sal/num_emp;
    printf("\nThe average salary is %.2f",average);
    for (int i = 0; i < no_of_employees; i++)
    {
        if (salaryrecords[i] < average)
        {
            printf("\n%s has below the average salary ",employee_names[i]);
        }
        else if(salaryrecords[i] > average)
        {
             printf("\n%s has higher the average salary and the salary is %d",employee_names[i],salaryrecords[i]);
        }
        else
        {
            printf("\n%s has the average salary ",employee_names[i]);
            
        }
        
        

    }


    return average;
}
