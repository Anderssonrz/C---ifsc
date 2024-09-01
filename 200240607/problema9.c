#include <stdio.h>
#include <locale.h>
#include <string.h>


void main() {
   setlocale (LC_ALL,"portuguese");

   char c1[50];
   char c2[50];

   printf("informe uma frase: ");
   scanf ("%s",&c1);
   printf("informe uma outra frase: ");
   scanf ("%s",&c2);

   if( strcmp(c1, c2) == 0 ){
        printf("As strings são iguais!");
   }else{
      printf("as strings não são iguais");
   }


}
