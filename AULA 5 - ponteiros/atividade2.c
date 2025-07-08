
#include <stdio.h>
#include <stdlib.h>

int main(){

    int x, y;

    printf("Insira o valor de x: ");
    scanf(" %d", &x);

    printf("Insira o valor de y: ");
    scanf(" %d", &y);

    if(&x > &y){
        printf("Endereco de x (maior): %p \n", &x);
        printf("Conteudo de x: %d \n", x);
    }
    else{
        printf("Endereco de y (maior): %p \n", &y);
        printf("Conteudo de y: %d \n", y);
    }

system("pause");
return 0;
}


