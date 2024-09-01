/*A partir da idade de uma pessoa, escreva um algoritmo que informe a sua classe eleitoral,
sabendo que menores de 16 não votam (não votante), que o voto é obrigatório para adultos entre
18 e 65 anos (eleitor obrigatório) e que o voto é opcional para eleitores entre 16 e 18, ou maiores
de 65 (eleitor facultativo)*/

#include <stdio.h>
#include <locale.h>
#include <stdlibe.h>

void main()
{

    setlocale(LC_ALL, "Portuguese");

float comissao, venda;
char vendedor[50];

printf("Informe qual o nome do  vendedor de automóveis usados: ");
scanf("%s", &vendedor);

 printf("Informe qual o valor do automovel de automóvel usado: ");
scanf("%f", &venda);


   if(venda < 100000 && venda > 0){
      comissao = venda * 0.02;
   }else if(venda >=100000 && venda <=200000){
      comissao = venda * 0.025;
   }else if(venda > 200000){
      comissao = venda * 0.03;
   }else if (venda <= 0){
      printf("Valor Inválido");
      exit (1);
   }
   printf("o Vendedor de automóveis usados %s vendeu R$%.2f esse mês e raceberá uma comissao de R$%.2f!!\n\n", vendedor, venda, comissao);


   }
