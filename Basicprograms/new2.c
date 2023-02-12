#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    int cout = 0;
    scanf("%d", &num);

    /*do{
        num = num / 10;
        cout++;
    }while(num != 0);*/

    while(num != 0){
       num = num / 10;
        cout++;
    }

    printf("%d",cout);


    return 0;
}
