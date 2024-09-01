/*. Escreva um algoritmo que permita ao usuario gerenciar a venda e o estoque de produtos.
O algoritmo deve receber o nome, valor e quantidade inicial de cada produto.
Em seguida, deve permitir que o usuario realize a venda dos produtos, informando o nome do produto e a quantidade desejada.
O algoritmo deve atualizar o estoque e apresentar uma nota fiscal com o valor total a ser pago pelo cliente.
Alem disso, o algoritmo deve permitir que o usuario aumente o estoque dos produtos, informando o nome do produto e a quantidade a ser adicionada.
Ao finalizar a operacao, o algoritmo deve perguntar ao usuario se deseja encerrar o programa..*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#define TAM 1000

char nome[TAM];
int qntde[TAM], cont = 0;
float valor[TAM];

int main()
{
   setlocale(LC_ALL, "Portuguese");
   int option;
   printf(" \t MENU DE OPCAES:\n\n ");
   printf("----------------------------------------\n");
   printf(" \t 1 | Inserir produto:\n ");
   printf(" \t 2 | Alterar produto:\n ");
   printf(" \t 3 | Lista de produtos:\n ");
   printf(" \t 4 | Vender produto:\n ");
   printf(" \t 5 | Imprimir nota fiscal:\n ");
   printf(" \t 6 | Sair do sistema:\n ");
   printf("----------------------------------------");
   printf("\n\t ESCOLHA UMA OPCAO : ");
   scanf("%d", &option);
   system("cls");

   switch (option) {
   case 1:
      inserirProduto();
      break;
   case 2:
      alterarProduto();
      break;
   case 3:
      listaProdutos();
      break;
   case 4:
      venderProduto();
      break;
   case 5:
      imprimirNota();
      break;
   case 6:
      printf("FECHANDO PROGRAMA...");
      break;
      return 0;
   }
}
void inserirProduto()
{
   printf("\tPreencha algumas informações para cadastrar o  produto!\n");
   printf("----------------------------------------");
   printf("\nNome: ");
   scanf("%s", &nome[cont]);

   printf("\nQuantidade: ");
   scanf("%f", &qntde[cont]);

   printf("\nValor - R$: ");
   scanf("%d", &valor[cont]);
   cont++;

   printf("Cadastro bem sucedido!\n\n");
   system("pause");
}
void alterarProduto()
{
   printf("Qual a alteração?");

}
void listaProdutos()
{
   printf("lista de produtos");
}
void venderProduto()
{
   printf("Produtos para vender");
}
void imprimirNota()
{
   printf("Imprimir nota fiscal");
}
