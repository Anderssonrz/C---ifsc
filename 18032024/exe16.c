#include <stdio.h>
#define MAX 15

int main()
{
    int cont = 0;
    int num = 1;
    int vetor[MAX];
    float i = 0;

// contar quantos numeros vai querer aparecer na tela
    while(cont < MAX)
    {
//condição para aparecer os multiplos de 4
        if(num % 4 == 0 )
        {
            printf("%d , ", num);
            vetor[cont]= num;
            cont++;
        }
        num++;
    }
}
