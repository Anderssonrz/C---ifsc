#include <stdio.h>
#include <stdlib.h>
#define AUGMENT 0.03
void main()
{
   float salario,novosalario,aumento;

   printf("digite o seu salario: ");
   scanf("%f", &salario);
   system("cls");
   if (salario >= 2000)
   {
      printf("seu salario eh: %f", salario);
   }else{
      aumento=salario*AUGMENT;
      novosalario=salario+aumento;
      printf("seu novo salario eh %f", novosalario);
   }
}
