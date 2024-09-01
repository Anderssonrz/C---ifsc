#include <stdio.h>
#include <stdlib.h>
#define PODESERPRESO 18
void main()
{
   int idade;

   printf("digite a idade: ");
   scanf("%d", &idade);
   system("cls");
   if (idade >= PODESERPRESO)
   {
      printf("toma cuidado com as sub16");
   }else{
      printf("toma cuidado com os tiozao");
   }
}
