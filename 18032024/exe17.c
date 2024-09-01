/*17. Elabore um programa que crie um vetor de 10 posições, e preencha estas posições com os
10 primeiros valores da série de Fibonacci.
Na série de Fibonacci os dois primeiros valores são 0 e 1. Os próximos valores são a soma
dos dois valores anteriores.*/


#include <stdio.h>
#define MAX 14

int main() {
  int a = 0, b = 1, c;


  for (int i = 0; i < MAX; i++) {
    printf("%d ", c);
    c = a + b;
    a = b;
    b = c;
  }

}
