#include<stdio.h>
#include<locale.h>
#define IDADE 18

void main(){
   setlocale (LC_ALL,"Portuguese");

   char user[20];
   char senha[20];


   printf("Digite o nome de usuário: ");
   scanf ("%s", user);

   printf("Digite a senha de usuário: ");
   scanf ("%s", senha);

      if (strcmp(user, "admin") == 0) {
         printf("O usuário é um administrador!");
      }

         if (strcmp(user, "admin123") == 0) {
            printf("\nNível 1 de acesso!");
         } else {
           printf("\nA senha digitada está errada!");
           printf("\nNível 1 de acesso!");
           }

               if (strcmp(user, "gerente") == 0) {
               printf("O usuário é um gerente!");
               }

                  if (strcmp(user, "admin123") == 0) {
                     printf("\nNível 2 de acesso!");
                  } else {
                    printf("\nA senha digitada está errada!");
                    printf("\nNível 1 de acesso!");
            } else
                     printf("\nNível 3 de acesso!");


}

