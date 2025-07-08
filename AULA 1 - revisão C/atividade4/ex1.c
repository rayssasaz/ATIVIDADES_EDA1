#include <stdio.h>
#include <stdlib.h>

int main(){

    int v1[5], v2[5];
    int i = 0, j = 0;
    int flag = 0;

    //preechendo o vetor 1:
    for(i = 0; i < 5; i++){
        printf("Informe o valor do elemento %d do vetor 1: \n",i + 1);
        scanf("%d", &v1[i]);
    }

    //preechendo o vetor 2:
    for(j = 0; j < 5; j++){
        printf("Informe o valor do elemento %d do vetor 2: \n",j + 1);
        scanf("%d", &v2[j]);
    }


    //exibindo os vetores;
     printf("\n\n Vetor1: ");
    for (i = 0; i < 5; i++){
        printf("%d  ", v1[i]);
    }
     printf("\n\n Vetor2: ");
    for (j = 0; j < 5; j++){
        printf("%d  ", v2[j]);
    }



    //exibindo valores comuns aos dois vetores:
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(v1[i] == v2[j]){
                flag++;
                printf("\nOs valores sao iguais na posicao %d do vetor1 e na posicao %d do vetor 2 \n\n", i + 1, j + 1);
            }
        }
    }

    if(flag == 0){
        printf("\n \t Os valores dos vetores nao coincidem em nenhuma posicao.\n");
    }

    printf("\tQuantidade de coincidencias: %d \n", flag);




    system("pause");
    return 0;
}
