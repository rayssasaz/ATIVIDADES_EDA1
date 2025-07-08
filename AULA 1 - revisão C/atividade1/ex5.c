#include <stdio.h>
#include <stdlib.h>

int main (){
char letra = 65; //char letra = 'A';
int i;

for(i = 0; i < 26; i++){
    printf(" %c", letra);
    letra++;
}

printf("\n\n");

system("pause");
return 0;
}

