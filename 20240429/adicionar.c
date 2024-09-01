/*faca um codigo que subtitua o primeiro vetor e mantenha o restante dos valores no vetor*/

#include <stdio.h>
#include <string.h>

int main()
{

    int i = 0, quant=10 ;
    int vetor[] = {5, 8, 7, 1, 3, 0, 0, 0, 0, 0};
    int valor_incluir = 0;

    for (int i = 0; i < quant; i++) {
        printf("[%d] = %d\n", i, vetor[i]);
    }

    printf ("Digite o novo valor para o primeiro elemento: \n");
    scanf ("%d", &valor_incluir);

    for (int i = quant - 1; i > 0; i--)
    {
        vetor[i] = vetor[i - 1];
    }

    vetor[0]=valor_incluir;

    for (int i = 0; i < quant; i++)
    {
        printf("[%d] = %d\n", i, vetor[i]);
    }

}
