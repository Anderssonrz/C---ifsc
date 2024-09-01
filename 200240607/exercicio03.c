#include<stdio.h>
#include<locale.h>


void main(){
   setlocale (LC_ALL,"Portuguese");

   float nota;

   printf("Digite a nota entre 0 e 100: ");
   scanf ("%f", &nota);

      if (nota >= 90) {
         printf("Conceito A.\n");
      } else {
         if (nota >= 80){
            printf("Conceito B.\n");
         }else{
            if(nota >= 70) {
            printf("Conceito C.\n");

            } else {
                    printf("Insuficiente.\n");
                   }
         }
      }


}


