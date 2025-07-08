#include <stdio.h>
#include <stdlib.h>

int main(){

    int mat[5][5], v[10];
    int i = 0, j = 0, soma = 0;

    for(i = 0; i < 5;i ++){
        for(j = 0; j < 5; j++){
            printf("Digite os valores da matriz na posicao %d e %d: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }

    //soma das linhas da matriz:
     for(i = 0; i < 5;i ++){
        for(j = 0; j < 5; j++){
            soma += mat[i][j];
        }
        printf("Linha %d soma: %d \n", i + 1, soma);
        v[i] = soma;
        soma = 0;
    }

     // soma das colunas da matriz
     for(j = 0; j < 5; j ++){
        for(i = 0; i < 5; i++){
            soma += mat[i][j];
        }
        printf("Coluna %d soma: %d \n", j + 1, soma);
        v[j + 5] = soma;
        soma = 0;
    }

    // totalização das linhas e colunas

    for(i = 0; i < 5; i++){
        printf("\nOs valores da soma da linha %d sao: %d\n ",i + 1, v[i]);
        printf("\nOs valores da soma da coluna %d sao: %d\n ",i + 1, v[i + 5]);
    }
    printf("\n\n\n");

    // exibindo a matriz
    printf("Matriz: \n\n");
    for(i = 0; i < 5;i++){
        for(j = 0; j < 5;j++){
            printf("\t %d  ", mat[i][j]);
        }
        printf("\n\n");
    }

system("pause");
return 0;
}
