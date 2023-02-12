#include <stdio.h>

    char students_name[5][25] ;
    int marks[4][2] ;

int MARKS();
int STUDENTS();
int main(){

    STUDENTS();

    return 0;
}

int STUDENTS(){
    for (int i = 0; i < 5; i++){
    printf("Input student(%d) name and their marks in four subjects -: ",i+1);
    scanf("%s ",&students_name[i]);
    }

    //for (int j = 0; j < 5; j++){
    //printf("Input student(%d) name is %s -: ",j+1,students_name[j][25]);
    
    //}
    return 0;
}