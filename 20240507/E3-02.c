#include<stdio.h>
#include<math.h>
#define PI 3.141592
int volume(int valor);
int raio(int diam);

void main(){

   int diametro;
   float resultado;

   printf("informar diametro da esfera: ");
   scanf("%d",&diametro);

   resultado = volume(diametro);

   volume(raio);

   printf("O volume da esfera é de %.2f", resultado);


}

int volume(int valor){

   return (4 * PI * pow(raio(valor),3)/3);

}

int raio(int diam){
   return(diam / 2);
}
