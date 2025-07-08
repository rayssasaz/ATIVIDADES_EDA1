#include<stdio.h>
#include<stdlib.h>


int finterativa(int n);
int frecursiva(int r);

int main(){
    int x;
    printf("Entre com um numero: \n");
    scanf("%d", &x);
    printf("Versao interativa: \n");
    finterativa(x);

    printf("\n\n");

    printf("Versao recursiva: \n");
    frecursiva(x);

system("pause");
return 0;
}
int finterativa(int n){
    int i;
    for(i = n; i >= 0; i--){
        printf("%d \n", i);
    }
}

int frecursiva(int r){
    printf("%d \n", r);
    if(r == 0){
        return 0;
    }
    return frecursiva(r - 1);
}
