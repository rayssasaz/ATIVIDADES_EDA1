#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;

    printf("\t Escolha um numero correspondente ao caractere [1 - A, 2 - B, 3 - C, 4 - D] \n\n");
    scanf("%d", &num);

    switch(num){
        case 1:
            printf("caractere escolhido: A \n");
            break;
        case 2:
            printf("caractere escolhido: B \n");
            break;
        case 3:
            printf("caractere escolhido: C \n");
            break;
        case 4:
            printf("caractere escolhido: D \n");
            break;
        default:
            printf("caractere escolhido: 0 \n");
            break;

    }



system("pause");
return 0;
}
