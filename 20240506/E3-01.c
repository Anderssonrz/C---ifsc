/*2. Escreva um algoritmo que leia as respostas de três questões de múltipla escolha ('a', 'b', 'c',
'd'). Em seguida, leia o gabarito dessas respostas, ou seja, as respostas corretas. Depois,
compare as respostas dadas com as do gabarito e indique quantas respostas estão corretas.*/

#include <stdio.h>
#include <stdlib.h>


void main()
{
    float  resp1a, resp1b, resp1c, resp1d, resp2a, resp2b, resp2c, resp2d, resp3a, resp3b, resp3c, resp3d;
    float  gab1a, gab1b, gab1c, gab1d, gab2a, gab2b, gab2c, gab2d, gab3a, gab3b, gab3c, gab3d;


    printf("Escreva as resposta das perguntas 1, 2 e 3 (a, b,c e d):\n  ");
printf("Resposta - 1.a: \n");
        scanf("%f", &resp1a);
    printf("Resposta - 1.b: \n");
        scanf("%f", &resp1b);
    printf("Resposta - 1.c: \n");
        scanf("%f", &resp1c);
    printf("Resposta - 1.d: \n");
        scanf("%f", &resp1d);
    printf("Resposta - 2.a: \n");
        scanf("%f", &resp2a);
    printf("Resposta - 2.b: \n");
        scanf("%f", &resp2b);
    printf("Resposta - 2.c: \n");
        scanf("%f", &resp2c);
    printf("Resposta - 2.d: \n");
        scanf("%f", &resp2d);
    printf("Resposta - 3.a: \n");
        scanf("%f", &resp3a);
    printf("Resposta - 3.b: \n");
        scanf("%f", &resp3b);
    printf("Resposta - 3.c: \n");
    scanf("%f", &resp3c);
    printf("Resposta - 2.b: \n");
    scanf("%f", &resp3d);

printf("O Gabarito de resposta das perguntas 1, 2 e 3 (a, b,c e d):\n ");

            printf("Gabarito - 1.a: ");
        scanf("%f", &gab1a);
            printf("Gabarito - 1.b: \n");
        scanf("%f", &gab1b);
            printf("Gabarito - 1.c: \n");
        scanf("%f", &gab1c);
            printf("Gabarito - 1.d: \n");
        scanf("%f", &gab1d);
            printf("Gabarito - 2.a: \n");
        scanf("%f", &gab2a);
            printf("Gabarito - 2.b: \n");
        scanf("%f", &gab2b);
            printf("Gabarito - 2.c: \n");
        scanf("%f", &gab2c);
            printf("Gabarito - 2.d: \n");
        scanf("%f", &gab2d);
            printf("Gabarito - 3.a: \n");
        scanf("%f", &gab3a);
            printf("Gabarito - 3.b: \n");
        scanf("%f", &gab3b);
            printf("Gabarito - 3.c: \n");
        scanf("%f", &gab3c);
            printf("Gabarito - 3.d: \n");
        scanf("%f", &gab3d);

    system("cls");
    switch (1)
    {
    case 1:
        printf(" 1.a resposta = %2.f, resposta do gabarito = %2.f: \n ", resp1a, gab1a );
        printf(" 1.b resposta = %2.f, resposta do gabarito = %2.f: \n ", resp1b, gab1b );
        printf(" 1.c resposta = %2.f, resposta do gabarito = %2.f: \n ", resp1c, gab1c );
        printf(" 1.d resposta = %2.f, resposta do gabarito = %2.f: \n ", resp1d, gab1d );


        printf(" 2.a resposta = %2.f, resposta do gabarito = %2.f: \n ", resp2a, gab2a );
        printf(" 2.b resposta = %2.f, resposta do gabarito = %2.f: \n ", resp2b, gab2b );
        printf(" 2.c resposta = %2.f, resposta do gabarito = %2.f: \n ", resp2c, gab2c );
        printf(" 2.d resposta = %2.f, resposta do gabarito = %2.f: \n ", resp2d, gab2d );

        printf(" 3.a resposta = %2.f, resposta do gabarito = %2.f: \n ", resp3a, gab3a );
        printf(" 3.b resposta = %2.f, resposta do gabarito = %2.f: \n ", resp3b, gab3b );
        printf(" 3.c resposta = %2.f, resposta do gabarito = %2.f: \n ", resp3c, gab3c );
        printf(" 3.d resposta = %2.f, resposta do gabarito = %2.f: \n ", resp3d, gab3d );
        break;

    }
}
