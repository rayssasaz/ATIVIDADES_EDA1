#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL,"Portuguese");
    char nome[40];
    int idade;
    float salario;

    printf("Nome do funcion�rio: ");
    gets(nome);

    printf("Idade do funcion�rio: ");
    scanf("%d", &idade);

    printf("Sal�rio do funcion�rio: ");
    scanf("%f", &salario);


    printf("\n\n\n");

    printf("Nome do funcion�rio: %s \n", nome);

    printf("Idade do funcion�rio: %d \n", idade);

    printf("Sal�rio do funcion�rio: %.2f \n", salario);







return 0;
}
