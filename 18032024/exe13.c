#include <stdio.h>
#define MAX 20

int main()
{
    int cont = 0, i, quant = 0, quantp = 0, quanti = 0;
    int valores[MAX];
    int vetpar[MAX];
    int vetimpar[MAX];
    int valor = 0;
    int valorBusca;

    printf ("Digite um valor: ");
    scanf ("%d", &valor);

    while (valor != 0)
    {
        valores[quant] = valor;
        quant++;

        printf ("Digite um valor: ");
        scanf ("%d", &valor);
    }

    printf ("\n");

    for (i = 0; i < quant; i++)
    {
        if (valores[i] % 2 == 0)
        {
            vetpar[quantp] = valores[i];
            quantp ++;
        }
        else
        {
            vetimpar[quanti] = valores[i];
            quanti ++;
        }
    }

    for (i = 0; i < quantp; i++)
    {
        printf ("%d ", vetpar[i]);
    }
    printf ("\n");

    for (i = 0; i < quanti; i++)
    {

        printf ("%d ", vetimpar[i]);

    }
    printf ("\n");
}
