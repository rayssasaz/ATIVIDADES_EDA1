
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *strupr(char *str);
char *strlwr(char *str);


int main(){

    char string[30];
    char palavra[50] = "Trabalhando com Linguagem C no IFSP";
    int i = 0;

        printf("Digite algo: \n");
        gets(string);
        for(i = 0; i < strlen(string); i++){
            if(islower(string[i])){
            string[i] = toupper(string[i]);
            }
            else{
                string[i] = tolower(string[i]);
            }
        }
        printf(" %s \n", string);

        printf("\n\n\n");

        printf("Antes: %s \n",palavra);
        strupr(palavra);
        printf("Maiusculas: %s \n", palavra);
        strlwr(palavra);
        printf("Minusculas: %s \n", palavra);


    return 0;
}

char *strupr(char *str){
    while(*str){
        *str = toupper(*str);
        str++;
    }
    return str;
}
char *strlwr(char *str){
    while(*str){
        *str = tolower(*str);
        str++;
    }
    return str;

}




