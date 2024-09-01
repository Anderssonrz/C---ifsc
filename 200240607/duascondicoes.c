#include<stdio.h>
#include<locale.h>

void main(){
   setlocale (LC_ALL,"Portuguese");

   int idade, contribuicao;
   char sexo;

   printf("Digite o seu sexo, M / F: ");
   scanf ("%s", &sexo);

   printf("Digite o idade do contribuinte: ");
   scanf ("%d", &idade);

   printf("Digite o tempo de contribuição: ");
   scanf ("%d", &contribuicao);

      if (sexo == 'M')
         printf("\n Contribuinte pode se aposentar");

         if (idade >= 65) {
            printf("\n Contribuinte não pode se aposentar.");
            }

              if (contribuicao >= 65) {
                  printf("\n Contribuinte não pode se aposentar.");
                  }

}
