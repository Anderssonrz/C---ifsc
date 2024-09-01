#include<stdio.h>
#define cl 2.9
#define c 8
#define n 7
float caloria1(float peso, float hora);
float caloria2(float peso, float hora);
float caloria3(float peso, float hora);

int main()
{

   float peso, horas, duracao, caloria;
   int met;
   printf("Informe seu peso corporal: ");
   scanf("%d",  &peso);
   printf("Informe Duracao do exercicio (em horas): ");
   scanf("%d",  &horas);
   printf("Escolha qual exercicio deseja: \n");
   printf("==================\n");
   printf("<1> caminhada leve\n");
   printf("<2> corrida a 8km/h\n");
   printf("<3> Natacao\n");
   printf("<4> ciclismo a 16-19 km/h\n");
   printf("==================\n");
   scanf("%d",  &met);
   switch(met) {
   case 1:
      caloria1(peso,horas);
      break;
   case 2:
      caloria2(peso,horas);
      break;
   case 3:
      caloria3(peso,horas);
      break;
   case 4:
      caloria2(peso,horas);
      break;
   default:
      printf("A opcao escolhida eh invalida");
   }
   return 1;
}
float caloria1(float peso, float horas)
{float calc;
 calc=(cl*peso)*horas;
 printf("caloria eh %2.f",calc);
return calc;
}
float caloria2(float peso, float horas)
{float calc;
 calc=(n*peso)*horas;
 printf("caloria eh %2.f",calc);
return calc;
}
float caloria3(float peso, float horas)
{float calc;
 calc=(c*peso)*horas;
 printf("caloria eh %2.f",calc);
return calc;
}




