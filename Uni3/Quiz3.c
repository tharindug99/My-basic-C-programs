#include<stdio.h>
int main(){
    int num = 1;
    char rooms = 'A';

    for(int i = 0;i<10;i++){
        if(num == 1){
            rooms = 'C';
            for(int  j = 1;j<4;j++){

                printf("%d%c\n", num,rooms);
                rooms = rooms + 1;

            }
            rooms = 'A';
            num = num + 1;
        }else if(num == 8){
            num++;
            continue;
        }else{
            for(int  j = 1;j<6;j++){
                printf("%d%c\n", num,rooms);
                rooms = rooms + 1;
            }
             rooms = 'A';
            num = num + 1;
    }
}
return 0;
}

