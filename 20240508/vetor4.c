/* Faça um programa que armazene a idade de 12
pessoas. Apresente a quantidade de pessoas maiores de idade e
também uma lista de todas as idades em ordem crescente. */

#include<stdio.h>
#define VAL 3
#define MAIOR 18
void main()
{
   int td[VAL], j, i, menor, aux, cont = 0;
//primeiro vetor
   for(i = 0; i < VAL; i++) {
      printf(" %d -  digite a idade: ", i);
      scanf("%d", &td[i]);

      if(td[i]>=MAIOR){
         cont++;
      }
   }
   printf("%d pessoas tem %d anos ou mais.", cont, MAIOR);
 //relizar a transformacao
   for(i = 0; i < VAL; i++) {
      menor = td[i];
      for(j =i  + 1; j < VAL; j++) {
         if ( td[j] <= menor) {
            aux = menor;
            menor = td[j];
            td[j] = aux;
         }
      }
      printf("\n%d", menor);
   }
}
