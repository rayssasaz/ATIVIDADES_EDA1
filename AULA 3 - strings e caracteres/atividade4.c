
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str1[20];
    char str2[20];

    printf("Digite uma palavra: ");
    gets(str1);

    printf("Digite outra palavra: ");
    gets(str2);

    if(strstr(str1, str2)){
        printf("\n\nA palavra %s esta contida na palavra %s", str2, str1);
    }
    else{
        printf("\n\nA palavra %s nao esta contida na palavra %s", str2,str1);
    }


return 0;
}


