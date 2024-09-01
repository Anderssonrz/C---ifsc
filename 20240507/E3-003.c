#include<stdio.h>
#include<stdlib.h>
#define cl 2.9
#define cd 8
#define n 7
#define c 8
float calccalor1(float kg, float time);
float calccalor2(float kg, float time);
float calccalor3(float kg, float time);
float calccalor4(float kg, float time);
float main(){
   float kg,time;
   int op;
   printf("=================================\n");
   printf("<1> ciclism\n");
   printf("<2> light running\n");
   printf("<3> running\n");
   printf("<4> swimming\n");
   printf("=================================\n");
   printf("chose a option: ");
   scanf("%d",&op);
   system("cls");
   printf("type your weight: ");
   scanf("%f",&kg);
   printf("\ntype the time spent in minutes: ");
   scanf("%f",&time);
   system("cls");
      switch(op) {
   case 1:
      calccalor1(kg,time);
      break;
   case 2:
      calccalor2(kg,time);
      break;
   case 3:
      calccalor3(kg,time);
      break;
      case 4:
      calccalor4(kg,time);
      break;
   default:
      printf("invalid option");
   }
   return 1;
}
float calccalor1(float kg, float time){
   float calc;
      calc=(c*kg)*time;
      printf("you spent %.0f",calc);
}float calccalor2(float kg, float time){
   float calc;
      calc=(cl*kg)*time;
      printf("you spent %.0f",calc);
}float calccalor3(float kg, float time){
   float calc;
      calc=(cd*kg)*time;
      printf("you spent %.0f",calc);
}float calccalor4(float kg, float time){
   float calc;
      calc=(n*kg)*time;
      printf("you spent %.0f",calc);
}
