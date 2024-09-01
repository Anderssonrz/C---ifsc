/*1. Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas.
 Escreva um algoritmoque receba o salário fixo do funcionário e o valor de suas vendas,
calcule e mostre a comissão e seu salário final.*/

#define VENDAS  0.4
#include<stdio.h>
#include<locale.h>

void main() {
setlocale(LC_ALL, "Portuguese");
printf("Utilizando caracteres e acentuação da língua portuguesa!\n\n");

float vendas, salario, salarioFinal, comissao;

 printf("digite o valor do salario: ");
 scanf("%f",&salario);

 printf("digite o valor das vendas: ");
 scanf("%f",&vendas);

   comissao = vendas * 0.4;
   salarioFinal = salario + comissao;

 printf("O SALARIO TOTAL É DE : %f",salarioFinal);
 scanf("%f",&salarioFinal);
 }
