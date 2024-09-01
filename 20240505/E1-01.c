/*Escreva um algoritmo que seja capaz de dar a classificação olímpica de 3 países informados. Para
cada país é informado o código, a quantidade de medalhas de ouro, prata e bronze. Considere que
cada medalha de ouro tem peso 3, cada prata tem peso 2 e cada bronze, peso 1*/

#include <stdio.h>
#include <locale.h>
#include <time.h>
#define OURO 3
#define PRATA 2
#define BRONZE 1

void main()
{

    setlocale(LC_ALL, "Portuguese");
    printf("Utilizando caracteres e acentua��o da l�ngua portuguesa!\n\n");

    char pais1[50], pais2[50], pais3[50];
    int cod1, cod2, cod3, o1, o2, o3, p1, p2, p3, b1, b2, b3, pontuacao1, pontuacao2, pontuacao3;

    printf("Entre com o nome de tres paises: ");
    scanf("%s %s %s", &pais1, &pais2, &pais3);

    printf("Entre com a qtde de medalhas de ouro para os tres paises: ");
    scanf("%d %d %d", &o1, &o2, &o3);

    printf("Entre com a qtde de medalhas de prata para os tres paises: ");
    scanf("%d %d %d", &p1, &p2, &p3);

    printf("Entre com a qtde de medalhas de bronze para os tres paises: ");
    scanf("%d %d %d", &b1, &b2, &b3);

    pontuacao1 = (o1 * OURO) + (p1 * PRATA) + (b1 * BRONZE);
    pontuacao2 = (o2 * OURO) + (p2 * PRATA) + (b2 * BRONZE);
    pontuacao3 = (o3 * OURO) + (p3 * PRATA) + (b3 * BRONZE);

    printf("O pais %s teve %d pontuacao! \n", pais1, pontuacao1);
    printf("O pais %s teve %d pontuacao! \n", pais2, pontuacao2);
    printf("O pais %s teve %d pontuacao! \n", pais3, pontuacao3);

    if (pontuacao1 > pontuacao2)
    {
        if (pontuacao1 > pontuacao3)
        {
            printf("Primeiro: %s", pais1);
        }
        else
        {
            printf("Primeiro: %s", pais1);
            printf("Segundo: %s", pais2);
            printf("Terceiro: %s", pais3);
        }
    }
    else if (pontuacao2 > pontuacao3)
    {
        if (pontuacao2 > pontuacao1)
        {
            printf("Primeiro: %s", pais2);
        }
        else
        {
            printf("Primeiro: %s", pais2);
            printf("Primeiro: %s", pais2);
            printf("Primeiro: %s", pais3);
        }
    }
    else if (pontuacao2 > pontuacao3)
    {
        if (pontuacao2 > pontuacao1)
        {
            printf("Primeiro: %s", pais3);
        }
        else
        {
            printf("Primeiro: %s", pais2);
            printf("Primeiro: %s", pais2);
            printf("Primeiro: %s", pais3);
        }
    }
}
