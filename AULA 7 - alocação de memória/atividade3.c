#include <stdio.h>
#include <stdlib.h>

/*Elabore um programa que calcule a soma de duas matrizes (M x N) dinâmicas de números
inteiros. Deve-se considerar as dimensões fornecidas pelo usuário. Entregue no Moodle.*/


int main(){

    int linhas, colunas;
    int i = 0, j = 0, num = 1, num2 = 0;
    int **M, **N;
    int soma[linhas][colunas];
    M = (int**) malloc(linhas * sizeof(int*));
    N = (int**) malloc(linhas * sizeof(int*));
    printf("Defina o numero de linhas e colunas das matrizes \n");
    scanf("%d %d", &linhas, &colunas);

    // preenchendo a matriz M
    for(i = 0; i < linhas; i++){
        M[i] = (int*) malloc(colunas * sizeof(int));
    }
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            M[i][j] = num;
            num++;
        }
    }

    printf("Matriz M: \n");
    // imprimindo a mariz M
     for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
           printf("%2d ",M[i][j]);
           if(j == colunas - 1){
                printf("\n");
           }
        }
    }

    // preenchendo a matriz N
    for(i = 0; i < linhas; i++){
        N[i] = (int*) malloc(colunas * sizeof(int));
    }
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            N[i][j] = num2;
            num2 += 2;
        }
    }

    printf("\n\n");
    printf("Matriz N: \n");
     // imprimindo a mariz N
     for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
           printf("%2d ",N[i][j]);
           if(j == colunas - 1){
                printf("\n");
           }
        }
    }

    printf("\n\nMatriz soma:\n");
    // matriz soma de M e N
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            soma[i][j] = M[i][j] + N[i][j];
            printf("%2d ",soma[i][j]);
             if(j == colunas - 1){
                printf("\n");
           }
        }
    }
    // imprimindo a matriz soma


    system("pause");
    return 0;
}


