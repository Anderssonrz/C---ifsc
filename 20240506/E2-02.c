#include <stdio.h>

void main()
{
    float valor;
    int cod;

    printf("Digite o Codigo do Produto: ");
    scanf("%d", &cod);
        printf("Digite o Preco do Produto: ");
    scanf("%f", &valor);
     switch (cod)

    {
    case 1:
        printf("O preco do produto eh R$%.2f e a procedencia e de Sul \n\n", valor ) ;
        break;
    case 2:
        printf("O preco do produto eh R$%.2f e a procedencia e de Norte \n\n", valor);
        break;

    case 3:
        printf("O preco do produto eh R$%.2f e a procedencia e de Leste \n\n", valor );
        break;

    case 4:
        printf("O preco do produto eh R$%.2f e a procedencia e de Oeste \n\n", valor);
        break;

    case 5:
        printf("O preco do produto eh R$%.2f e a procedencia e de Nordeste \n\n", valor);
        break;

    case 6:
        printf("O preco do produto eh R$%.2f e a procedencia e de Nordeste \n\n", valor);
        break;

    default:
        printf("O preco do produto eh %f e a procedencia e de Dia inexistente", valor );
    }
}
