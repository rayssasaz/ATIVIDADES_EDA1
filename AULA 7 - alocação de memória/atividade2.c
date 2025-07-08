#include <stdio.h>
#include <stdlib.h>


/* Escreva um programa que solicita ao usuário a quantidade de alunos de uma turma aloque
um vetor dinamicamente com esta quantidade e armazene as notas dos alunos. Depois de
coletar do teclado, armazenar no vetor dinâmico e imprimir as notas de todos os alunos,
imprime também a média aritmética de toda a turma. Entregue no Moodle.
*/
int main(){

    float *nota;
    float media, sum, n;
    int i = 0;

    nota = (float*) malloc(n * sizeof(float));

    if(nota == NULL){
        printf("Erro: sem memoria!");
        exit(1);
    }

    printf("Quantidade de alunos na turma: ");
    scanf("%f", &n);


    for(i = 0; i < n; i++){
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &nota[i]);
    }

     for(i = 0; i < n; i++){
        printf("Nota do aluno %d: %.2f \n", i + 1, nota[i]);

    }

    printf("\n\n");

     for(i = 0; i < n; i++){
        sum += nota[i];
    }

    media = sum / n;
    printf("Media: %.2f \n", media);

    system("pause");
    return 0;
}

