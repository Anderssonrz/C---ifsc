#include<stdio.h>

void main ()
{
   int valor, qntde = 0;
   int cont = 0;
   float soma = 0;
   float media;

   printf("\nQuantos numeros deseja informar?\n ");
   scanf("%d", &qntde);

   while(cont < qntde) {
      printf("Digite o numero: ");
      scanf("%d", &valor);
      soma+=valor;
      cont++;
   }
   media= soma/qntde;
   printf("A qunatidade de valor foi %d\n", cont);
   printf("A media foi %2.f\n", media);
}
