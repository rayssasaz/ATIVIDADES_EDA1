
#include <stdio.h>
#include <stdlib.h>


struct funcionario{
int ID;
char nome[30];
int idade;
float salario;
};


int main(){
int i = 0;

struct funcionario func[5];

    for (i = 0; i < 5; i++){
        printf("ID do funcionario %d: ", i + 1);
        scanf(" %d", &func[i].ID);

        getchar();

        printf("Nome do funcionario %d: ", i + 1);
        fgets(func[i].nome, 30, stdin);

        printf("Idade do funcionario %d: ", i + 1);
        scanf(" %d", &func[i].idade);


        printf("Salario do funcionario %d: ", i + 1);
        scanf("%f", &func[i].salario);

        system("cls");

    }

    system("cls");

    for (i = 0; i < 5; i++){
        printf("ID do funcionario %d: %d\n", i + 1, func[i].ID);

        printf("Nome do funcionario %d: %s\n", i + 1, func[i].nome);

        printf("Idade do funcionario %d: %d\n", i + 1, func[i].idade);

        printf("Salario do funcionario %d: %.2f\n", i + 1, func[i].salario);

        printf("\n\n");
    }


    system("pause");
return 0;
}
