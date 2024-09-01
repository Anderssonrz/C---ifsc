/*faca um codigo que anule o primeiro vetor e mantenha o restante dos valores no vetor*/
#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0, quant=10 ;
    int vetor[] = {5, 8, 7, 1, 3, 0, 0, 0, 0, 0};
    int valor_incluir = 0;

    printf ("Valores do vetor: \n");
    for (i = 0; i < quant; i++){
        printf("[%d] = %d\n", i, vetor[i]);
    }

    for (i = 0; i < quant - 1; i++){
    vetor[i] = vetor[i+1];
    }
    
    printf ("Valores do vetor sem o primeiro numero: \n");
    for (i = 0; i < quant; i++)
    {
        printf("[%d] = %d\n", i, vetor[i]);
    }
}
