
#include <stdio.h>

    char students_name[5][25] ;
    int marks[5][4] ;
    int totalmarks = 0, nextInt = 0;

int MARKS();
int STUDENTS();
int main(){

    STUDENTS();

    return 0;
}



int STUDENTS(){
    int j,i;

    printf("\nInput student name and their marks in four subjects -: \n");
    for(int i = 0;i < 5;i++)
    {
    scanf("\n%s %d %d %d %d",&students_name[i],&marks[i][0],&marks[i][1],&marks[i][2],&marks[i][3]);

    }

    for( j = 0;j < 5;j++){
        i = 0;
        i++;
        nextInt = nextInt + marks[i][j];
        
        printf("\n%s %d %d %d %d %d",students_name[j],marks[j][0],marks[j][1],marks[j][2],marks[j][3],nextInt);
        nextInt = 0;
    }
    return 0;
}