
#include <stdio.h>
#include <stdlib.h>

void modifica(int *m);

int main(){

    int x, y,z;
    int *p1, *p2, *p3;


    printf("Insira o valor de x: ");
    scanf(" %d", &x);

    printf("Insira o valor de y: ");
    scanf(" %d", &y);

    printf("Insira o valor de z: ");
    scanf(" %d", &z);


    p1 = &x;
    p2 = &y;
    p3 = &z;

    modifica(p1);
    modifica(p2);
    modifica(p3);

system("pause");
return 0;
}

void modifica(int *m){
    *m += 100;
    printf("%d \n", *m);
}
