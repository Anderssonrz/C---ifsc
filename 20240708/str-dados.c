#include <stdio.h>
#include <stdlib.h>
#include <string.h>



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
    printf("--------------------------\n");
    printf("|      Menu Principal    |\n");
    printf("--------------------------\n");
    printf("|   Incluir Item     | 1 |\n");
    printf("--------------------------\n");
    printf("|   Listar Itens     | 2 |\n");
    printf("--------------------------\n");
    printf("|  Pesquisar Itens   | 3 |\n");
    printf("|------------------------|\n");
    printf("|     Backup         | 4 |\n");
    printf("|------------------------|\n");
    printf("|   Ler Arquivo      | 5 |\n");
    printf("|------------------------|\n");
    printf("|     Ordenar        | 6 |\n");
    printf("|------------------------|\n");
    printf("|     Editar         | 7 |\n");
    printf("|------------------------|\n");
    printf("|     Sair           | 0 |\n");
    printf("--------------------------\n");
    printf("Tecle a opcao: ");
    scanf("%d", &opcao);
    return opcao;
}


int ordenar_produto(tProd* vProd, int qtd)
{
    float f_temp;
    int i_temp;
    char s_temp[50];

    int i;
    int houve_troca = 1;
    while (houve_troca == 1)
    {
        houve_troca = 0;
        for (i = 0; i < qtd - 1; i++)
        {
            if (strcmp(vProd[i].descricao, vProd[i+1].descricao) > 0)
            {
                houve_troca = 1;

                i_temp = vProd[i].codigo;
                vProd[i].codigo = vProd[i + 1].codigo;
                vProd[i + 1].codigo = i_temp;

                strcpy(s_temp, vProd[i].descricao);
                strcpy(vProd[i].descricao, vProd[i + 1].descricao);
                strcpy(vProd[i + 1].descricao, s_temp);

                f_temp = vProd[i].preco;
                vProd[i].preco = vProd[i + 1].preco;
                vProd[i + 1].preco = f_temp;

            }

        }
        printf("----------------------------------------------\n");

    }
}

int inclusao(tProd* vProd, int qtd)
{
    system("cls");
    printf("Inclusao (%d)\n",qtd);


    printf("codigo:...");
    scanf("%d", &vProd[qtd].codigo);
    printf("descricao:");
    fflush(stdin);
    gets(vProd[qtd].descricao);
    printf("preco:....");
    scanf("%f", &vProd[qtd].preco);
    printf("Registro Incluido! \n");
    system("pause");
    return qtd+1;
}
int editar_produto(tProd* vProd, int qtd)
{
    int i = 0;
    int posicao = -1;
    int buscar;

    printf("--------------------------\n");
    printf("Qual produto deseja editar\n");
    printf("--------------------------\n");

    printf("Digite o codigo do produto desejado: ");
    scanf("%d", &buscar);

    for (i = 0; i < qtd; i++)
    {
        if (vProd[i].codigo == buscar)
        {
            posicao = i;
            break;
        }
    }

    if (posicao == -1)
    {
        printf("Produto não encontrado.\n");
    }
    else
    {
        printf("Produto encontrado:\n");
        printf("Codigo:... %d\n", vProd[posicao].codigo);
        printf("Descricao: %s\n", vProd[posicao].descricao);
        printf("Preco:.... %.2f\n", vProd[posicao].preco);

        printf("Digite os novos dados do produto:\n");
        printf("Nova descricao: ");
        fflush(stdin);
        gets(vProd[posicao].descricao);
        printf("Novo preco: ");
        scanf("%f", &vProd[posicao].preco);

        gravar_arquivo(vProd, qtd);
        printf("Produto alterado com sucesso!\n");
    }

    system("pause");
    return 0;
}





int listar(tProd* vProd, int qtd)
{
    system("cls");
    int i = 0;
    printf("--------------------------\n");
    printf("Listagem Produtos\n");
    printf("--------------------------\n");


    for (i = 0; i < qtd; i++)
    {
        printf("| %5d | %-30s | %6.2f |\n", vProd[i].codigo, vProd[i].descricao, vProd[i].preco);
    }
    printf("--------------------------\n");
    printf("| Total de Registros: %3d |\n", qtd);
    printf("--------------------------\n");
    system("pause");

}

int pesquisar(tProd* vProd, int qtd)
{
    system("cls");
    int cont = 0;
    int i = 0;
    char buscar[50];

    printf("--------------------------\n");
    printf("Pesquisar Produtos\n");
    printf("--------------------------\n");

    fflush(stdin);
    printf("Digite a descrisao para pesquisa: ");
    gets(vProd[qtd].descricao);

    for (i = 0; i < qtd; i++)
    {


        if (strstr(strlwr(vProd[i].descricao), strlwr (buscar)) != 0)
        {
            printf("| %5d | %-30s | %6.2f |\n", vProd[i].codigo, vProd[i].descricao, vProd[i].preco);
            printf("--------------------------\n");
            cont ++;

        }
        printf("| Total de Registros Loca: %3d |\n", cont);
        printf("--------------------------\n");
        system("pause");
    }



}

int gravar_arquivo(tProd* vProd, int qtd)
{
    int i;
    char nomearquivo[] = "produtos.csv";
    FILE* file = fopen (nomearquivo, "w");
    if (file == NULL)
    {
        printf("Erro ao tentar gravar o arquivo\n");

    }
    else
    {
        for(i = 0; i < qtd; i++)
        {
            fprintf(file, "%d;%s;%f\n", vProd[i].codigo, vProd[i].descricao, vProd[i].preco);
        }
        printf("Arquivo gravado com sucesso!");
        system("pause");
    }
    fclose(file);
}


int ler_arquivo(tProd* vProd)
{

    int cont = 0;
    char* token;
    char linha[256] = "";
    char nomearquivo[] = "produtos.csv";
    FILE* file = fopen (nomearquivo, "r");
    if (file == NULL)
    {
        printf("Erro ao tentar gravar o arquivo\n");

    }
    else
    {
        while (fgets(linha,256, file))
        {
            printf("%s", linha);
            // processar os campos da linha
            // codigo
            token = strtok(linha, ";\n");
            vProd[cont].codigo = atoi(token);
            // descricao
            token = strtok(NULL, ";\n");
            strcpy(vProd[cont].descricao, token);
            // preco
            token = strtok(NULL, ";\n");
            vProd[cont].preco = atof(token);
            cont++;

        }
    }
    fclose(file);
    printf ("O numero de linhas do arquivo: %d", cont);
    system("pause");
    return cont;
}


int main()
{
    tProd vProd[100];
    int qtd=0;
    int opcao;
    do
    {
        opcao = mostra_menu();

        switch (opcao)
        {
        case 1:
            qtd= inclusao(vProd, qtd);
            break;
        case 2:
            listar(vProd, qtd);
            break;
        case 3:
            pesquisar(vProd, qtd);
            break;
        case 4:
            gravar_arquivo(vProd, qtd);
            break;
        case 5:
            qtd = ler_arquivo(vProd);
            break;
        case 6:
            ordenar_produto(vProd, qtd);
            break;
        case 7:
            editar_produto(vProd, qtd);
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

