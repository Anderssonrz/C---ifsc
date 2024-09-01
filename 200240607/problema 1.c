#include <stdio.h>
#include <stdlib.h>
void main()
{
   float temperatura;

   printf("digite a temperatura: ");
   scanf("%f", &temperatura);
   system("cls");
   if (temperatura < 20)
   {
      printf("ta frio bixo");
   }else{
      printf("ta quente bixo");
   }
}
