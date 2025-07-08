#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char string[10];
    int i = 0;

    printf("Digite algo: "); // nao deve ter espaços
    gets(string);

    for(i = 0; i < strlen(string); i++){
        string[i] -= 32;
    }

    printf("%s", string);









return 0;
}
