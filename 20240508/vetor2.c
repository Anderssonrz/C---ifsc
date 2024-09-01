#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    char nome[200];
    float salario;  //variável de leitura
    int i, qnt;        //variável de controle
    float soma=0, media, maiorSalario, menorSalario;

    printf("Quantos funcionários?\n");
    scanf(" %d", &qnt);
    //laço repete de acordo com a quantidade de funcionários informada
    for(i = 0; i < qnt; i++){
        printf("Digite o nome: ");
        scanf(" %s", &nome);
        printf("Salario: R$");
        scanf(" %f", &salario);
        soma += salario;
        //defini o valor inicial para as variáveis maior e menor
        if (i == 0){
            maiorSalario = salario;
            menorSalario = salario;
        }
        //atualiza o maior se o valor digitado for maior que o registrado
        if (salario > maiorSalario)
            maiorSalario = salario;
        //atualiza o menor se o valor digitado for menor que o registrado
        if (salario < menorSalario)
            menorSalario = salario;
    }
    media = soma/qnt;
    printf("Media: R$ %.2f", media);
    printf("Maior salario: R$ %2.f", maiorSalario);
    printf("Menor salario: R$ %2.f", menorSalario);
}
