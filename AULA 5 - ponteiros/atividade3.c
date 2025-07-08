#include <stdio.h>
#include <stdlib.h>

int main(){

float vet[10];
double vetdb[10];
int x = 0, i = 0;

// preechendo o vetor:

for(i = 0; i < 10; i++){
    vet[i] = x;
    x++;
}

// imprimindo endereços

for(i = 0; i < 10; i++){
    printf("Endereco %d : %p \n", i, &vet[i]);
}

// preechendo o vetor:

for(i = 0; i < 10; i++){
    vetdb[i] = x;
    x++;
}

printf("\n\n\n");

// imprimindo endereços
for(i = 0; i < 10; i++){
    printf("Endereco (double) %d : %p \n", i, &vetdb[i]);
}



system("pause");
return 0;
}
