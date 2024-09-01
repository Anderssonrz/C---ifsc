#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int codigo;
    char descricao[50];
    float preco;
} tProd;
int mostra_menu()
{
    int opcao;
    system("cls");
    printf("Menu Principal\n");
    printf("1 - Incluir---\n");
    printf("2 - Listar----\n");
    printf("0 - Sair------\n");
    printf("Tecle a opcao: \n");
    scanf("%d", &opcao);
    return opcao;
}
int inclusao()
{
    printf("Inclusao\n");
    system("pause");
}
int listar()
{
    printf("Listando\n");
    system("pause");

}
int main()
{
    tProd vProd[100];
    int qtd;
    int opcao;
    do
    {
        opcao = mostra_menu();

        switch (opcao)
        {
        case 1:
            inclusao();
            break;
        case 2:
            listar();
            break;
        case 0:
            printf("Encerrando...");
            break;
        default:
            printf("opcao invalida\n");
        }

    }
    while(opcao != 0);
}
