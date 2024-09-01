#include <stdio.h>
#include <locale.h>
#define DIARIA 60
void main()
{

    setlocale(LC_ALL, "Portuguese");

    float diaria, limpeza, comanda, tl;

    printf("Digite a quantidade de dias que ficou hospedado");
    scanf("%f", &diaria);

    if (diaria > 0 && diaria <= 5){
        limpeza =8.00;
         comanda=(limpeza* diaria) + (diaria * DIARIA);
    }else if (diaria > 15 && diaria <= 15){
         limpeza =6.50;
         comanda=(limpeza* diaria)  + (diaria * DIARIA);
    }else if (diaria > 15){
         limpeza =5.50;
         comanda=(limpeza* diaria)  + (diaria * DIARIA);
    }else if (diaria <= 0){
       printf("O total e de R$0");
    }
             printf("vc ficou %2.f e a comanda total eh de R$%2.f", diaria, comanda);

}
