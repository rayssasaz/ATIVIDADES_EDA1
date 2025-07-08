
#include <stdio.h>
#include <stdlib.h>

// definição da estrutura
typedef struct funcionario{
int ID;
char nome[30];
int idade;
float salario;
}FUNCIONARIO;

// protótipo de funções
FUNCIONARIO coletaDados();
void printTela(FUNCIONARIO p[], int n);
void reajuste(float *sal);
void rel_salario_corrigido(FUNCIONARIO p);

int main(){
int i = 0;
int n = 5; // teste
FUNCIONARIO p[n]; //vetor pessoa

for (i = 0; i < n; i++){
        p[i] = coletaDados();
    }

    printTela(p, n);

    for(i = 0; i < n; i++){
        reajuste(&p[i].salario);

        rel_salario_corrigido(p[i]);
    }

    system("pause");
return 0;
}

FUNCIONARIO coletaDados(){
FUNCIONARIO pData;

    printf("\n\n ID do funcionario: ");
    scanf(" %d", &pData.ID);
    getchar();

    printf("\nNome do funcionario: ");
    fgets(pData.nome, 30, stdin);
    pData.nome[strlen(pData.nome)-1] = '\0';

    printf("\nIdade do funcionario: ");
    scanf(" %d", &pData.idade);

    printf("\nSalario do funcionario: ");
    scanf("%f", &pData.salario);

    system("cls");
    return pData;
}

void printTela(FUNCIONARIO p[], int n){
    int i = 0;
    for (i = 0; i < n; i++){
        printf("\nID do funcionario %d: %d ", i + 1, p[i].ID);
        printf("\nNome do funcionario %d: %s ", i + 1, p[i].nome);
        printf("\nIdade do funcionario %d: %d ", i + 1, p[i].idade);
        printf("\nSalario do funcionario %d: %.2f \n", i + 1, p[i].salario);
    }
}

void reajuste(float *salario){
    *salario *= 1.10;
}

void rel_salario_corrigido(FUNCIONARIO p){
    printf("\n\nFuncionario: %s \n Salario ajustado: %.2f ", p.nome, p.salario);
}

