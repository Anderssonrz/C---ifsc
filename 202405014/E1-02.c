/*De forma geral, chama-se equação do segundo grau toda equação que pode ser escrita
na forma: ax² + bx + c, em que x é a variável e "a", "b" e "c" são os coeficientes da
equação do segundo grau.
Para encontrar as raízes reais de uma equação de segundo grau, podemos utilizar a
fórmula de Bhaskara:
Faça um algoritmo que encontre as raízes da equação 3x² + 4x + 1*/

#include<stdio.h>
#include<locale.h>
#include<math.h>

void main(){
float a, b, c;
float raiz1, raiz2, delta;

setlocale(LC_ALL, "Portuguese");

printf("digite o valor para \"a\": ");
scanf("%f", &a);

printf("difite o valor para \"b\" :");
scanf("%f", &b);

printf("difite o valor para \"c\" :");
scanf("%f", &c);

delta = pow(b,2) - 4 * a * c;
raiz1 = (-b + sqrt(delta)) /2 * a;
raiz2 =(-b - sqrt(delta)) /2 * a;

printf("X1 = %.2f\n", raiz1);
printf("X2 = %.2f\n", raiz2);


}
