#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char nome[50];
    int i=0, cont=0;
    int stringSize= strlen(nome);

    printf("Digite seu nome: ");

    gets(nome);
    fflush(stdin);
    
    printf("vc digitou: %s\n", nome);
    printf("tamanho da string: %d\n", strlen(nome));

    for(i=0; i<stringSize; i++)
    {
        printf("%c_", nome[i]);
    }
    //     while (nome[i] != 0){
    // printf("%c_", nome[i]);
    //  i++;
    //  cont++;}
    //  printf("comprimento: %d\n", cont);
}
