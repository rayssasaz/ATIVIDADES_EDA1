#include <stdio.h>
#include <stdlib.h>

// prototipo e variaveis globais:
    void calculoVantagens(float numH, float salH, int numF, float valorF, float *SB, float *SF, float *VT);
    void calculoDeducoes(float tax, float *SB, float *inss, float *irpf, float *ded);





int main (){
    float salarioBruto, salarioFamilia, vantagens, INSS, IRPF, deducoes;
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

    calculoVantagens(numeroHoras, salarioHora, numeroFilhos, valorPorFilho, &salarioBruto, &salarioFamilia, &vantagens);
    printf("\n O salario bruto e: %.2f \n O salario familia e: %.2f \n As vantagens sao no valor de: %.2f", salarioBruto, salarioFamilia, vantagens);

    calculoDeducoes(taxaIR, &salarioBruto, &INSS, &IRPF, &deducoes);
    printf("\n O INSS e: %.2f: \n\n O IRPF e: %.2f \n Deducoes: %.2f \n", INSS, IRPF, deducoes);

    system("pause");
    return 0;
}

void calculoVantagens(float numH, float salH, int numF, float valorF, float *SB, float *SF, float *VT){

    *SB = numH * salH;
    *SF = numF * valorF;
    *VT = *SB + *SF;
}


void calculoDeducoes(float tax, float *SB, float *inss, float *irpf, float *ded){
    *inss = *SB * 0.08;
    *irpf = *SB * tax;
    *ded = *inss + *irpf;
}



