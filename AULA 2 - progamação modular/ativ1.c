#include <stdio.h>
#include <stdlib.h>

// prototipo e variaveis globais:
    void calculoVantagens(float numH, float salH, int numF, float valorF);
    void calculoDeducoes(float tax);

    float salarioBruto, salarioFamilia, vantagens, INSS, IRPF, deducoes;



int main (){
    float numeroHoras, salarioHora, valorPorFilho, taxaIR;
    int numeroFilhos;

    printf("Numero de horas trabalhadas: \n");
    scanf("%f", &numeroHoras);

    printf("Salario por hora trabalhada: \n");
    scanf("%f", &salarioHora);

    printf("Numero de filhos: \n");
    scanf("%d", &numeroFilhos);

    printf("Valor por filho: \n");
    scanf("%f", &valorPorFilho);

    printf("taxa IR: ");
    scanf("%f", &taxaIR);

    calculoVantagens(numeroHoras, salarioHora, numeroFilhos, valorPorFilho);
    printf("\n O salario bruto e: %.2f \n O salario familia e: %.2f \n As vantagens sao no valor de: %.2f", salarioBruto, salarioFamilia, vantagens);

    calculoDeducoes(taxaIR);
    printf("\n O INSS e: %.2f: \n\n O IRPF e: %.2f \n Deducoes: %.2f", INSS, IRPF, deducoes);
    return 0;
}

void calculoVantagens(float numH, float salH, int numF, float valorF){

    salarioBruto = numH * salH;
    salarioFamilia = numF * valorF;
    vantagens = salarioBruto + salarioFamilia;
}

void calculoDeducoes(float tax){
    INSS = salarioBruto * 0.08;
    IRPF = salarioBruto * tax;
    deducoes = INSS + IRPF;
}



