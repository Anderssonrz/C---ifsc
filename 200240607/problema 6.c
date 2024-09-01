#include <stdio.h>
#include <stdlib.h>
#define NOTA 6
void main()
{
   float g1,g2,media;

   printf("digite a sua primeira nota: ");
   scanf("%f", &g1);
   printf("digite a sua segunda nota: ");
   scanf("%f", &g2);
   media = (g1+g2)/2;
   system("cls");
   if (media >= NOTA)
   {
      printf("aprovado");
   }else{
      printf("reprovado");
   }
}
