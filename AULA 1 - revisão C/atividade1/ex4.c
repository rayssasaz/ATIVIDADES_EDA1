#include <stdio.h>
#include <stdlib.h>

int main (){

    char escolha;
    printf("Quer continuar? [sim - s, nao - n]\n\n");
    scanf("%c", &escolha);

    switch(escolha){
        case 's':
            printf("Voce quer continuar");
            break;
        case 'n':
            printf("Voce quer parar");
            break;
        default:
            printf("escolha invalida");
            break;
    }

    printf("\n\n\n");


    system("pause");
    return 0;
}

