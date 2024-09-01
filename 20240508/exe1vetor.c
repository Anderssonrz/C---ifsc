/*Faça um programa que receba 15 valores, do usuário, armazene em um
vetor e depois apresente na tela os valores pares.*/

#include <stdio.h>
#include<stdlib.h>
#define SIZE 3
void main()
{
    int numbers[SIZE], i,reverse[SIZE];

    for(i = 0; i <SIZE; i++)
    {
        printf("%d - type a random integer number: ",i);
        scanf("%d",&numbers[i]);
    }
    system("cls");
    for(int i = 0; i < SIZE; i++)
    {
        reverse[(SIZE-1)-i] = numbers[i];
    }
    for(int i = (SIZE-1); i >= 0; i--)
    {

        printf("the sequence of typed numbers written in reverse is %d\n",numbers[i]);

    }
}
