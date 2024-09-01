#include <stdio.h>
#include <stdlib.h>

typedef struct{
int matr;
char nome[50];
char sexo;
float altura;
}tAluno;
int main()
{
tAluno aluno1;
aluno1.matr = 123456;
aluno1.sexo = 'F';
aluno1.altura= 1.63;
strcpy(aluno1.nome, "Amanda");

printf("Matric.: %d\n", aluno1.matr);
printf("Nome...: %s\n", aluno1.nome);
printf("Sexo...: %c\n", aluno1.sexo);
printf("Altura.: %.2f\n", aluno1.altura);
}
