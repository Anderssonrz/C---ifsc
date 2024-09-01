#include <stdio.h>
#define MAX 20

int main()
{
    int cont = 0, i,  quant= 0;
    float valores[MAX];
    float valor = 0;

    printf ("Digite um valor: ");
    scanf ("%f", &valor);


    while (valor != 0)
    {
valores[quant] = valor;
            cont++;
        if (valor <=3 && valor >=7 )
        {

printf("Valor valido! \n");

}else{

printf("Valor invalido! \n");
}
        printf ("Digite um valor: ");
        scanf ("%f", &valor);
    }
    printf(" %d ", valor);
}
