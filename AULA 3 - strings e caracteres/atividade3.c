
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char str[10];
    char consoante;
    int i = 0, vogal = 0;

    printf("Digite algo: ");
    gets(str);

    printf("Digite uma consoante: ");
    scanf("%c", &consoante);

    for(i = 0; i < strlen(str); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            vogal++;
        }
    }

    printf("A palavra tem %d vogais\n\n", vogal);

    for(i = 0; i < strlen(str); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            str[i] = consoante;
        }
    }

    printf("Nova palavra: %s", str);



return 0;
}

