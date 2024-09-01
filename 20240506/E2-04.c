#include <stdio.h>
#include <stdlib.h>
#define trinta 30
#define eum 31
#define nove 29
#define oito 28


void main()
{
    int ano, mes;

    printf("1 - Janeiro: \n");
    printf("2 - Fevereiro: \n");
    printf("3 - Marco: \n");
    printf("4 - Abril: \n");
    printf("5 - Maio: \n");
    printf("6 - Junho: \n");
    printf("7 - Julho: \n");
    printf("8 - Agosto: \n");
    printf("9 - Setembro: \n");
    printf("10 - Outubro: \n");
    printf("11 - Novembro: \n");
    printf("12 - Dezembro: \n");
    printf("Escreva um numero de um mes representante de 1 a 12 : ");
    scanf("%d", &mes);
    printf("Escreva o ano que deseja: \n");
    scanf("%d", &ano);


    system("cls");
    switch (mes)
    {
    case 1:
        printf(" Numero de dias desse mes eh %d: \n", eum);


        break;

    case 2:
        if(ano%4==0 && (ano%100!=0 || ano%400==0)){
      printf ("Numero de dias desse mes eh %d: \n", nove);
    }else{
        printf("Numero de dias desse mes eh %d: \n ", oito);
      }

        break;

    case 3:
        printf(" Numero de dias desse mes eh %d: \n", eum);

        break;
    case 4:
                printf(" Numero de dias desse mes eh %d: \n", trinta);

        break;

    case 5:
                printf(" Numero de dias desse mes eh %d: \n", eum);

        break;

    case 6:
        printf(" Numero de dias desse mes eh %d: \n", trinta);

        break;
    case 7:
                printf(" Numero de dias desse mes eh %d: \n", eum);

        break;

    case 8:
                printf(" Numero de dias desse mes eh %d: \n", eum);

        break;

    case 9:
                printf(" Numero de dias desse mes eh %d: \n", trinta);

        break;
    case 10:
                printf(" Numero de dias desse mes eh %d: \n", eum);

        break;

    case 11:
                printf(" Numero de dias desse mes eh %d: \n", trinta);

        break;

    case 12:
        printf(" Numero de dias desse mes eh %d: \n", eum);

        break;
    }
}
