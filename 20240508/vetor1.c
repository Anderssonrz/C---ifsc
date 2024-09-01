/*Faça um programa que calcule a média das notas do
vetor abaixo
100 - 97- 88 - 46 */
#include<stdio.h>
#include<locale.h>
#define TAM 4
void main ()
{

   int n[TAM] ;
   int i;
   int media, soma=0.0;
   for( i = 0; i< TAM; i++ ) {
      printf("%d)digite as notas: ", i+1);
      scanf("%d", &n[i]);
   }

   for (i=0; i< TAM; i++) {
      soma += n[i];
   }
   media= soma / TAM ;
   printf("A media eh: %.2d", media);

}
