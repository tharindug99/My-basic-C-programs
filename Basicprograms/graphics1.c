#include <stdio.h>
int stars;


void main(){


printf("Enter the number of stars -:");
scanf("%d",&stars);


for(int i=stars; i>=1; i--){

    for(int j=stars; j>=i; j--)
        {
        printf(" * ");
        }
    printf("\n");
}

pattern3();
}


pattern3(){
    printf("Enter the number of numbers -:");
    scanf("%d",&stars);


for(int i=stars; i>=1; i--){

    for(int j=stars; j>=i; j--)
        {
        printf(" %d ",i);

        }
    printf("\n");


}
}
