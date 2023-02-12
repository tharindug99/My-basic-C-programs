#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

int main(){

    FILE *pf;
    int errnum;
    pf = fopen("C:\\Users\\ASUS\\Documents\\C\\basicprograms\\Unistuff4\\Filescreated\\unexist.txt","rb");

    if (pf == NULL)
    {
        /* code */errnum = errno;
        fprintf(stderr,"Value of errno: %d \n",errno);
        perror("error printed by perror");
        fprintf(stderr,"Error opening file: %s\n", strerror(errnum));
    }
    else
    {
        fclose(pf);
    }
    

    return 0;
}