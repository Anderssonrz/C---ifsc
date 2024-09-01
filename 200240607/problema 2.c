#include <stdio.h>
#include <stdlib.h>
void main()
{
   int x1,x2;

   printf("digite o primeiro numero: ");
   scanf("%d", &x1);
      printf("digite o segundo numero: ");
   scanf("%d", &x2);
   system("cls");
   if (x1 == x2)
   {
      printf("os numeros sao iguais");
   }
   if (x1 != x2)
   {
      printf("os numeros nao sao iguais");
   }
}
