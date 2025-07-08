
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){
    char space[2] = " ";
    char str1[15], str2[15], str3[15];

    printf("Digite seu nome: ");
    gets(str1);

    strcat(str1, space);

    printf("Digite seu segundo nome: ");
    gets(str2);

    strcat(str1, str2);

    printf("Digite seu ultimo nome: ");
    gets(str3);

    strcat(str1, space);
    strcat(str1, str3);

    printf("Nome completo: %s", str1);





return 0;
}
