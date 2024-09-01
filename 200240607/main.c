#include <stdio.h>
#include <locale.h>
#include <string.h>

void main()
{
    setlocale(LC_ALL, "portuguese");
    char genero, m, f [1];
    int idade, trabalho;

    printf("digite seu genero (M) ou (F): ");
    scanf("%d &genero");

    if (strcmp(genero, "M") == 0){
            printf("digite a sua idade: ");
            scanf("%d &idade");
             if (idade >= 65){

                printf("digite o tempo de contribuição: ");
                scanf("%d &trabalho");}

            if (trabalho >= 15)
            {
                printf("voce vai se aposentar!");
            }
            else
            {
            }
        }
}


