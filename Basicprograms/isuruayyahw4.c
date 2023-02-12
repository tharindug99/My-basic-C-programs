#include <stdio.h>
int Numbers[5], i, j, amount ,pos=0, minimum =100000000;


int main(){

printf("Enter the amount of numbers -:  ");
scanf("%d", &amount);

for(int i=0 ; i<amount; i++){
        scanf("%d", &Numbers[i]);
}

min();

printf("The lowest value is %d and position is %d \n",minimum,pos);
return 1;
}


int min(){

for(int i=0 ; i<amount; i++){
    if(Numbers[i]<minimum){
        minimum = Numbers[i];
        pos = i + 1;
    }
}
return minimum;
}
