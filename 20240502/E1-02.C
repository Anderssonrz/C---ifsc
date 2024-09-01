/*2. Escreva um algoritmo que calcule o valor da hipotenusa de um triângulo retângulo.
a. Usar a função sqrt() da biblioteca math.h
*/
#include<stdio.h>
#include<math.h>
void main(){
int ca, co, hipotenusa;

printf("Entre com o valor do cateto adjacente: ");
scanf("%d", &ca);
printf("Entre com o valor do cateto oposto: ");
scanf("%d", &co);

hipotenusa = (co * co) + ( ca * ca);
hipotenusa = sqrt(hipotenusa);

printf("A hipotenusa eh: %d\n", hipotenusa);
}
