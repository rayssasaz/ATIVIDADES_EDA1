#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL,"Portuguese");
    char nome[40];
    int idade;
    float salario;

    printf("Nome do funcionário: ");
    gets(nome);

    printf("Idade do funcionário: ");
    scanf("%d", &idade);

    printf("Salário do funcionário: ");
    scanf("%f", &salario);


    printf("\n\n\n");

    printf("Nome do funcionário: %s \n", nome);

    printf("Idade do funcionário: %d \n", idade);

    printf("Salário do funcionário: %.2f \n", salario);







return 0;
}
