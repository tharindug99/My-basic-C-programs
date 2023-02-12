#include<stdio.h>
int main()
{

int status;

char filen[25];

printf("Enter the name of the file you want to delete -:");
gets(filen);

status = remove(filen);

if (status == 0)
    printf("Succesfully deleted");
else
{
    printf("Unable to delete the file \n");
    perror("Following error occurred");
}






return 0;


}


