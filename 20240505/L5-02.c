/*1. Escreva um algoritmo que leia o valor de vendas do mês de um vendedor de automóveis usados e
que determine a comissão que receberá de acordo com a tabela abaixo. O sistema deve exibir a
mensagem valor inválido caso este seja menor que 0 (zero).
2. A partir da idade de uma pessoa, escreva um algoritmo que informe a sua classe eleitoral,
sabendo que menores de 16 não votam (não votante), que o voto é obrigatório para adultos entre
18 e 65 anos (eleitor obrigatório) e que o voto é opcional para eleitores entre 16 e 18, ou maiores
de 65 (eleitor facultativo).*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    int idade;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    if (idade > 0 && idade < 16) {
        printf("\nNão eleitor.");
    } else if (idade >= 18 && idade <= 65) {
        printf("\nEleitor obrigatório.");
    } else if (idade == 16 || idade == 17 || idade > 65) {
        printf("\nEleitor facultativo.");
    } else {
        printf("Digite uma idade válida.");
    }
}