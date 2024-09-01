#include <stdio.h>
#include <stdlib.h>
void main(){
 int n1, n2, n3, SOMA;

printf("digite o primeiro numero:");
scanf ("%d", &n1);
printf("digite o segundo numero:");
scanf ("%d", &n2);
printf("digite o segundo numero:");
scanf ("%d", &n3);
system("cls");
SOMA= n1+n2;
if (SOMA > n3){
printf (" se encontra como numero superior a %d:",n3);}
else
if (SOMA < n3){
printf (" se encontra como numero inferior a %d:", n3);}
else
if (SOMA == n3){
printf (" se encontra como numero igual a %d:", n3);}
}

