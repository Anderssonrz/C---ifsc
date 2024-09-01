#include <stdio.h>
#define MAX 20

int main()
{
   int cont = 0, i, quant = 0;
   float valores[MAX];
   float valor = 0;
   float valorBusca;

   printf ("Digite um valor: ");
   scanf ("%f", &valor);

    while (valor != 0){
       valores[quant] = valor;
       quant++;

        printf ("Digite um valor: ");
        scanf ("%f", &valor);
    }

    printf ("\n");

    printf ("Qual valor voce deseja procurar?: ");
    scanf ("%f", &valorBusca);

    printf ("\n");

    for (i = 0; i < quant; i++){
        if (valores[i] == valorBusca){

            printf ("* %.2f *\n", valores[i]);
            cont ++;
            break;
        }


    }
    printf ("\n");
    printf ("O valor %.2f foi encontrado %d vezes.", valorBusca, cont);
    printf ("\n");
}


