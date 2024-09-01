/*Desenvolva um algoritmo que permita a leitura de um vetor de 30
números inteiros, e gere um segundo vetor com os mesmos dados, só
que de maneira invertida, ou seja, o primeiro elemento ficará na última
posição, o segundo na penúltima posição, e assim por diante.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    char nome[200];
    float salario;
    int i, qnt; 
    float soma=0, media, maiorSalario, menorSalario;

    printf("Quantos funcionários?\n");
    scanf(" %d", &qnt);
