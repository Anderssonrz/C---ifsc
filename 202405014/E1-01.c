#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<stdlib.h>

void main(){
   float precoCusto, acrecimo, novoPreco, aumento;

   setlocale(LC_ALL, "Portuguese");

printf("Data: %s \t Hora: %s", __DATE__, __TIME__);
printf("\n\n");

print("Digite o preco de custo do produto: R$");
scanf("%f", &precoCusto);

print("Digite o percentual de agrecimo (0,0 - 1,0): ");
scanf("%f", &acrecimo);

system("cls");
prinf("O acrecimo sera de R$.2f", precoCusto * acrecimo);
scanf("\n");

novoPreco = precoCusto + aumento;
printf("O novo preco e R$%.2f", novoPreco);
printf("\n");
}
