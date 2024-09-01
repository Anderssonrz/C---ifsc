#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    char user[20], senha[20];
    printf("digite o seu usuario: ");
    scanf("%s", &user);
    printf("\n");
    printf("digite a sua senha: ");
    scanf("%s", &senha);
    system("cls");

    if (strcmp(user, "admin") == 0)
    {
        printf("o usuario eh um adm!\n");
        if (strcmp(senha, "admin123") == 0)
        {
            printf("\no usuario tem nivel 1 de acesso\n");

        }else{

            printf("senha errada\n");
        }
    }else{
        if (strcmp(user, "gerente") == 0)
        {
            printf("o usuario eh um gerente!\n");
            if (strcmp(senha, "gerente123") == 0)
            {
                printf("\no usuario tem nivel 2 de acesso");
            }else{
                printf("senha errada\n");
            }
        }else{
            printf("o usuario nao esta cadastrado, nivel 3 de acesso\n");
        }
    }
}
