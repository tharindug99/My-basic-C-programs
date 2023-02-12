#include <stdio.h>
#include <stdlib.h>

#define STUDENTS 5
#define SUBJECTS 4

void get_list(char *string[ ][10], int array[ ][SUBJECTS +1] , int m, int n);
void get_sum(int array [ ][SUBJECTS +1], int m, int n);
void print_list(char *string[ ][10],int array [][SUBJECTS + 1],int m,int n);
void get_rank_list(char *string [ ][10], int array [ ][SUBJECTS + 1], int m, int n);


int main()
{


    char name[STUDENTS][10];
    int marks[STUDENTS][SUBJECTS+1];

    printf("Input students names & their marks in four subjects\n");

    get_list(name, marks, STUDENTS, SUBJECTS);
    get_sum(marks, STUDENTS, SUBJECTS+1);

    printf("\n");

    print_list(name,marks,STUDENTS,SUBJECTS+1);
    get_rank_list(name, marks, STUDENTS, SUBJECTS+1);

    printf("\nRanked List\n\n");

    print_list(name,marks,STUDENTS,SUBJECTS+1);



    return 0;
}

void get_list(char *string[ ][10],int array[ ][SUBJECTS +1], int m, int n){

    int i;
    int j;
    int (*rowptr)[SUBJECTS+1] = array;

    for(i = 0; i < m; i++){
        scanf("%s", &string[i]);
        for(j = 0; j < n; j++){
             scanf("%d", &(*(rowptr + i))[j]);
        }

    }
}

void get_sum(int array[ ][SUBJECTS +1], int m, int n){
    int i;
    int j;
    int (*rowptr)[SUBJECTS+1] = array;

    for(i = 0; i < m; i++){
        (*(rowptr + i))[n-1] = 0;
            for(j =0; j < n-1; j++){
                ((rowptr + i))[n-1] += ((rowptr + i))[j];
            }
    }
}

void print_list(char *string[ ][10],int array [][SUBJECTS + 1],int m,int n){
    int i;
    int j;
    int (*rowptr)[SUBJECTS+1] = array;
    for(i = 0; i < m; i++){
        printf("%s\t", string[i]);
        for(j = 0; j < n; j++){
            printf("    %d", (*(rowptr + i))[j]);

        }
         printf("\n");

    }
}

void get_rank_list(char *string [ ][10], int array [ ][SUBJECTS + 1], int m, int n){
    int i;
    int j;
    int k;
    int (*rowptr)[SUBJECTS+1] = array;

    char *temp;
    for(i = 1; i <= m-1; i++){
        for(j = 1; j <= m-i; j++){
            if( ((rowptr + j-1))[n-1] < ((rowptr + j))[n-1]){
                swap_string(&string[j-1], &string[j]);

                for(k = 0; k < n; k++){
                    swap_int(&((rowptr + j-1))[k],&((rowptr+j))[k]);
                }
            }
        }
    }
}

void swap_int(int *p, int *q){
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}


void swap_string(char *s1, char *s2){


    char swaparea[10];

    int i;

    for(i = 0; i < 10; i++){
        swaparea[i] = '\0';
    }

    i = 0;
    while(s1[i] != '\0' && i < 10){
        swaparea[i] = s1[i];
        i++;
    }

    i = 0;
    while(s2[i] != '\0' && i < 10){
        s1[i] = s2[i];
        s1[++i] = '\0';
    }

    i = 0;
    while(swaparea[i] != '\0'){
        s2[i] = swaparea[i];
        s2[++i] = '\0';
    }
}

/*void swap_string(char *s1, char *s2){

    for(int i=0; i<20; i++)
    {
        char temp1 = s1[i];
        s1[i] = s2[i];
        s2[i] = temp1;
    }

}*/