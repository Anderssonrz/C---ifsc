#include <stdio.h>
#include <stdlib.h>
void main(){
 int n1;

printf("digite o numero entre -10 e 10:");
scanf ("%d", &n1);
system("cls");
if (n1 > 0){
printf ("%d o numero digitado e positivo",n1);}
else
if (n1 < 0){
printf ("%d o numero digitado e negativo", n1);}
else
if (n1 == 0){
printf ("%d o numero digitado e zero", n1);}
}
