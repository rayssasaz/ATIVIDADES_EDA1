
#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;

    printf("\t Escolha um numero correspondente ao caractere [1 - A, 2 - B, 3 - C, 4 - D] \n\n");
    scanf("%d", &num);

    if(num == 1){
        printf("caractere escolhido: A \n");
    }
    else{
        if(num == 2){
             printf("caractere escolhido: B \n");
        }
        else{
            if(num == 3){
                 printf("caractere escolhido: C \n");
            }
            else{
                if(num == 4){
                     printf("caractere escolhido: D \n");
                }
                else{
                     printf("caractere escolhido: 0 \n");
                }
            }
        }
    }


system("pause");
return 0;
}
