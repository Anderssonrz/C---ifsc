#include <stdio.h>
#include <stdlib.h>

int soma(int volr1, int valor2);
int subtracao(int valor1, int valor2);
int multiplicacao(int valor1, int valor2);

void main()
{
    int n1, n2, resultado;
    char op;
    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);
    fflush(stdin);
    printf("Digite a operacao: ");
    scanf("%c", &op);
    fflush(stdin);
    printf("Digite o segundo valor: ");
    scanf("%d", &n2);
    system("cls");
    switch (op)
    {
    case '/':
    case 'D':
    case 'd':
                resultado= divisao(n1, n2);

        break;
    case '*':
    case 'M':
    case 'm':
                resultado= multiplicacao;

        break;
    case '+':
    case 'A':
    case 'a':
                resultado= soma;

        break;
    case '-':
    case 'S':
    case 's':
        resultado= multiplicacao;
        break;

    default:
        printf(" Operacao invalida!");
    exit(1);}

    printf(" O resultado eh %2.d \n\n", resultado);
}

int soma(int valor1, int valor2){
int res;
 res= valor2 + valor1;
return;
}

int subtracao (int valor1, int valor2){
int res;
if (valor1>valor2){
   res= valor1 - valor2;
   }else{
     res= valor2 - valor1;
 }
return res;
}

int multiplicacao (int valor1, int valor2){
   return valor1 + valor2;
}

int divisao (int valor1, int valor2){
   if (valor2==0){
      printf("nao eh possivel dividir por 0!");
          exit(1);}
          else{
            return(valor1 / valor2);
          }

   }
