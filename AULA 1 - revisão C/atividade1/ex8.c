
#include <stdio.h>
#include <stdlib.h>

int main (){
    int i = 0;

    for(i = 0; i < 10; i++){
        if(i == 5){
            printf("\t\tcaptura de i em %d \n\n", i);
            continue;
            printf("essa mensagem nao sera impressa");
        }
        printf("valor de i: %d \n\n", i);
    }

    printf("\n\n");

    system("pause");
    return 0;
}

