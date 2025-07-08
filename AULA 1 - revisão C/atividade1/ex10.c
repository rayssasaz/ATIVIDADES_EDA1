#include <stdio.h>
#include <stdlib.h>

int main (){
    int j = 5;

        if(j == 5){
            j++;
            goto imprime;
        }

    j = 395;    //atribuiçao ignorada

    imprime:
        printf("valor de j: %d \n\n", j);


    printf("\n\n");
    system("pause");
    return 0;
}


