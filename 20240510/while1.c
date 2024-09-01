#include<stdio.h>

void main ()
{
   int valor;
   int cont = 0;
   int soma = 0;
   float media;

   printf("digite:");
   scanf("%d", &valor);

   while(valor != 0) {
      soma+=valor;
      cont++;

      printf("digite:");
      scanf("%d", &valor);
   }
   media= soma/cont;
   printf("A qunatidade de valor foi %d\n", cont);
   printf("A media foi %2.f\n", media);
}
