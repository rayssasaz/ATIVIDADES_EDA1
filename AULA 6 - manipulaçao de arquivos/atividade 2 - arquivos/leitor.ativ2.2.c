#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct funcionario{
    int ID;
    char nome[30];
    int idade;
    float salario;
}FUNC;

int main(){

    FILE *fp = fopen("arquivo.txt", "rb");
    if (fp == NULL){
        printf("Erro na abertura! \n");
        system("pause");
        exit(1);
    }

    FUNC c;

    fseek(fp, 2*sizeof(FUNC), SEEK_SET);
    fread(&c, sizeof(FUNC), 1, fp);
    printf("ID: %d \nNOME: %s \nIDADE: %d \nSALARIO: %.2f \n ", c.ID, c.nome, c.idade, c.salario);


    system("pause");
    return 0;
}
