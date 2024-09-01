/*3. Escreva um algoritmo que receba uma hora (uma variável para hora e outra para minutos), calcule e
mostre:
- a hora digitada convertida em minutos
- o total de minutos, ou seja, os minutos digitados mais a conversão anterior
- o total dos minutos convertidos em segundos*/

#include<stdio.h>
#include<locale.h>
#define MINUTOS= 60

void main() {
setlocale(LC_ALL, "Portuguese");
printf("Utilizando caracteres e acentuação da língua portuguesa!\n\n");

float hora, minuto, segundos;

 printf("Digite a hora: ");
 scanf("%2f",&hora);

 printf("Digite os minutos: ");
 scanf("%2f",&minuto);

  hora *= 60;
  minuto += hora;
  segundos = minuto * 60;

 printf("Hora digitada convertida em minutos : %.2f\n", hora);
 printf("Total de minutos : %.2f\n", minuto);
 printf("Total dos minutos convertidos em segundos: %.2f\n", segundos);

 }
