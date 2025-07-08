#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>



int main (){
setlocale(LC_ALL, "");
FILE *f, *f2;
f = fopen("arq1.txt", "w");
if (f == NULL ||f2 == NULL){
    printf("Erro na abertura! \n");
    system("pause");
    exit(1);
}

char text[100];
int i = 0;

printf("Digite um pequeno texto: \n");
gets(text);

for(i = 0; i < strlen(text); i++){
    fputc(text[i],f);
}

fclose(f);

f = fopen("arq1.txt", "r");
f2 = fopen("arq2.txt", "w");



char c = fgetc(f);
while(c != EOF){
    fputc(toupper(c), f2);
    c = fgetc(f);
}

fclose(f);
fclose(f2);

f2 = fopen("arq2.txt", "r");
char b = fgetc(f2);
while(b != EOF){
    printf("%c", b);
    b = fgetc(f2);
}

printf("\n\n\n");
fclose(f2);

system("pause");
return 0;
}
