#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct funcionario{
    int ID;
    char nome[30];
    int idade;
    float salario;
}FUNC;


int main(){

    FILE *fp = fopen("arquivo.txt", "wb");
    if (fp == NULL){
    printf("Erro na abertura! \n");
    system("pause");
    exit(1);
}
    int i = 0, n = 5; //teste
    FUNC p[n];

    // preenchendo o vetor da estruturaa
    for (i = 0; i < n; i++){
    printf("ID do funcionario %d: ", i + 1);
    scanf(" %d", &p[i].ID);

    fflush(stdin);

    printf("Nome do funcionario %d: ", i + 1);
    fgets(p[i].nome, 30, stdin);

    printf("Idade do funcionario %d: ", i + 1);
    scanf(" %d", &p[i].idade);

    fflush(stdin);

    printf("Salario do funcionario %d: ", i + 1);
    scanf("%f", &p[i].salario);
    }

    // criando arquivo em disco:
    fwrite(p, sizeof(FUNC), 5, fp);
    fclose(fp);


    system("pause");
    return 0;
}
