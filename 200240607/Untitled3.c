#include <stdio.h>
#include <locale.h>
#include <string.h>

void main()
{
    setlocale(LC_ALL, "portuguese");

    float nota;

    printf("digite a nota: ");
    scanf("%f", &nota);
    if (nota >= 90)
    {
        printf("conceito A");
    }
    else

        if (nota >= 80)
    {
        printf("conceito B");
    }
    else if (nota >= 70)
    {
        printf("conceito C");
    }
    else
    {
        printf("insuficiente");
    }
}
