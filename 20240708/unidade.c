#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* int main()
{
    int uni;
    int dez;

    dez = 0;

    while(dez<=3)
    {
        //para cada dezena vou pegar as unidades(10)
        uni = 0;
        while(uni<=9)
        {
            printf("%d %d\n", dez,uni);
            uni++;
        }

        dez++;
    }
}*/

int main()
{
    int lin, col;
    int soma = 0;
    int mat[4][4] = {2,4,6,8,1,3,5,7,8,6,4,2,7,5,3,1};
    int somacol[4] = {0,0,0,0};
    int somalin[4] = {0,0,0,0};

    for (lin = 0; lin <= 3; lin++)
    {
        for (col = 0; col <= 3; col++)
        {
            printf("%d %d = %d\n", lin,col, mat[lin][col]);
            soma += mat[lin][col];
            somalin[lin]+= mat[lin][col];
            somacol[col]+= mat[lin][col];
        }
    }
    printf("\nsoma de todos os valores = %d", soma);
    printf("\n%d", somalin);
    printf("\n%d", somacol);
}
