/*3- Escreva um algoritmo que leia um conjunto de dados contendo altura e gênero ('M' para
masculino e 'F' para feminino) de 50 pessoas. O algoritmo deve devolver:
- a maior e a menor altura do grupo
- a média de altura das mulheres
- o número de homens e a diferença percentual entre homens e mulheres*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<math.h>
#define PESSOAS 5
void main ()
{
   float altura, difPerc;
   float menorAlt, maiorAlt;
   float somaAltF = 0.0, mediaAltF;
   char genero;
   int cont, contF = 0;

   for (cont = 0; cont < PESSOAS;  cont++) {
      fflush(stdin);
      printf("%d) QUal eh seu sexo? (M) - (F) : ", cont+1);
      scanf("%c", &genero);

      printf("%d) Digite a sua altura: ", cont+1);
      scanf("%f", &altura);
      if ( cont ==0 ) {
         menorAlt = altura;
         maiorAlt = altura;
      }
      if( menorAlt < altura){
         maiorAlt = altura;
      }
      if(altura > maiorAlt){
         maiorAlt = altura;
      }
      if(genero =='f' || genero =='F' ) {
         contF++;
         somaAltF+= altura;
      }
   }
   mediaAltF = somaAltF/contF;
   printf("A altura media das mulheres eh: %.2f\n", mediaAltF);
   printf("O numero de meninos eh: %d\n", PESSOAS-contF);
   printf("A menor altura eh: %.2f\n", menorAlt);
   printf("A maior altura eh: %.2f\n", maiorAlt);

   difPerc = contF - (PESSOAS  - cont) * 100 / PESSOAS;
   printf("A diferenca percentual entre homens e mulheres eh: %.2f\n", difPerc);

}
