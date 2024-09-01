#include<stdio.h>
void parOuimpar(int num);
void positivoNegativoOuZaro(int num);
void anoBissexto(int num);

int main()
{

   int valor, opcao;

   printf("Entre com um valor: ");
   scanf("%d",  &valor);
   printf("==================\n");
   printf("<1> par ou impar\n");
   printf("<2> positivo, negativo ou zero\n");
   printf("<3> ano bissexto\n");
   printf("==================\n");
   scanf("%d", &opcao);

   switch(opcao) {
   case 1:
      parOuimpar(valor);
      break;
   case 2:
      positivoNegativoOuZaro(valor);
      break;
   case 3:
      anoBissexto(valor);
      break;
   default:
      printf("A opcao escolhida eh invalida");
   }
   return 1;
}

void parOuimpar(int num)
{
   if (num % 2 == 0) {
      printf("%d eh par\n", num);
   }
   else {
      printf("%d eh impar\n", num);
   }
}

void positivoNegativoOuZaro(int num)
{
   if(num>0) {
      printf("%d eh positvo\n", num);
   }
   else if(num<0) {
      printf("%d eh negativo\n", num);
   }
   else {
      printf("%d eh zero\n", num);
   }
}

void anoBissexto(int num)
{
   if((num % 400 == 0) || ((num % 4 == 0) && (num % 100 !=0))) {
      printf("% eh um ano bissexto \n", num);
   }
   else {
      printf("%d nao eh um ano bisexto.\n", num);
   }
}
