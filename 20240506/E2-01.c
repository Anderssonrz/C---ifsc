#include <stdio.h>
#include<stdlib.h>


void main(){
    int dia=2;

    printf("DIGITE UM NUMEO DA SEMANA DE 1 A 7: ");
    scanf("%d", &dia);
    system("cls");
    switch (dia)
    {
    case 1:
    printf("domingo \n\n");
        case 2:
    printf("segunda \n\n");
        case 3:
    printf("terça \n\n");
        case 4:
    printf("quarta \n\n");
        case 5:
    printf("quinta \n\n");
        case 6:
    printf("sexta \n\n");
        case 7:
    printf("sabado \n\n");
    default:
        printf("Dia inexistente");
    }

}
