#include<stdio.h>
#include<stdlib.h>


int func(int n);
int func2(int num);

int main(){
    int x,y;
    printf("Entre com um numero: \n");
    scanf("%d", &x);
    printf("Escolha um metodo: \n 1 - recursivo \n 2 - interativo \n");
    scanf("%d", &y);
    switch(y){
        case 1: printf("Resultado recursivo: %d \n",func(x));
        break;
        case 2: printf("Resultado interativo: %d \n", func2(x));
        break;
        default: printf("Erro");
        break;
    }

system("pause");
return 0;
}
// função recursiva
int func(int n){
    if(n == 0){
        return 0;
    }
    return(n + func(n - 1));
}

// função interativa
int func2(int num){
    int i = 0, sum = 0;
    int t = num;

    for(i = 0; i < num; i++){
        sum += t;
        t--;
    }
    return sum;
}




