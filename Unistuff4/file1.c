#include<stdio.h>
#include<stdlib.h>

int main(){

    int num;
    FILE *fptr;

    fptr = fopen("C:\\Users\\ASUS\\Documents\\C\\basicprograms\\Unistuff4\\Filescreated\\new1.txt","w");

    if (fptr == NULL)
    {
     printf("Error");
     exit(1);
    }

    printf("Enter the number -: ");
    scanf("%d",&num);

    fprintf(fptr,"%d",num);
    fclose(fptr);

    fopen("C:\\Users\\ASUS\\Documents\\C\\basicprograms\\Unistuff4\\Filescreated\\new1.txt","w");

    return 0;
}