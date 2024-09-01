#include <stdio.h>
#include <locale.h>
#include <string.h>


void main() {
   setlocale (LC_ALL,"portuguese");

  float salario, novoSalario, aumento;
int codigo;
 printf("digite seu codigo do funcionario: ");
    scanf("%d", &codigo);
     printf("digite seu salario: ");
 scanf("%f", &salario);

        if (codigo == 1){
aumento = salario * 0.5;
novoSalario = salario + aumento;
        printf("%d funcionario 1 tem um aumento de R$%.0f  e o novo salario é de R$%.0f:", codigo, aumento, novoSalario );
        }else if(codigo==2){
        aumento = salario * 0.35;
novoSalario = salario + aumento;
        printf("%d funcionario 2 tem um aumento de R$%.0f  e o novo salario é de R$%.0f:", codigo, aumento, novoSalario );
        }else if(codigo==3){
        aumento = salario * 0.20;
novoSalario = salario + aumento;
        printf("%d funcionario 3 tem um aumento de R$%.0f  e o novo salario é de R$%.0f:", codigo, aumento, novoSalario );
        }else if(codigo==4){
        aumento = salario * 0.10;
novoSalario = salario + aumento;
        printf("%d funcionario 4 tem um aumento de R$%.0f  e o novo salario é de R$%.0f:", codigo, aumento, novoSalario );
        }else if(codigo==5){
        aumento = salario * 0.00;
novoSalario = salario + aumento;
        printf("%d funcionario 5 tem um aumento de R$%.0f  e o novo salario é de R$%.0f:", codigo, aumento, novoSalario );
        }
}
