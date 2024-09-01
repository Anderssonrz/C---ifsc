/* 2. Escreva um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual calcule e mostre:
- a idade dessa pessoa em anos
- a idade dessa pessoa em meses
- a idade dessa pessoa em dias
- a idade dessa pessoa em semanas*/

#include<stdio.h>
#include<locale.h>
#include<time.h>
void main() {

setlocale(LC_ALL, "Portuguese");
printf("Utilizando caracteres e acentua��o da l�ngua portuguesa!\n\n");

int atual, nascimento, anos, meses, semanas, dias;
printf("Ano atual: ");
scanf ("%d", &atual);
printf("Ano de nascimento:");
scanf ("%d", &nascimento);

anos= atual - nascimento;
meses = anos * 12;
semanas = anos  * 52;
dias = (anos * 365);

printf  ("Idade em anos:%d\n", anos);
printf  ("Idade em meses: %d\n", meses);
printf  ("Idade em semanas:%d\n", semanas);
printf  ("Idade em dias:%d\n", dias);


}
