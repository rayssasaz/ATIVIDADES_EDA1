#include <stdio.h>
#include <stdlib.h>


// Faça um programa que aloque memoria para um vetor dinâmico com n números inteiros
// ímpares maiores que 0, em seguida imprima o vetor. Entregue no Moodle.
int main(){

    int *p;
    int i = 0, n = 5, num = 1;
    p = (int*) malloc(n * sizeof(int));

    if(p == NULL){
        printf("Erro: sem memoria!");
        exit(1);
    }

    for(i = 0; i < n; i++){
        p[i] = num;
        num += 2;
    }

    for(i = 0; i < n; i++){
        printf("%d ", p[i]);
    }

    printf("\n\n");

    system("pause");
    return 0;
}
