#include <stdio.h>
#include <locale.h>
#include <windows.h>
#define FUSO 3
void main() {
   setlocale (LC_ALL,"Portuguese");
   SYSTEMTIME data;
   GetSystemTime(&data);
   int ano = data.wYear;
   int mes = data.wMonth;
   int hora = data.wHour - FUSO;
   int N_mes, N_ano, idd;
   char nome[40];
   printf("informe seu nome (numeral): ");
   scanf ("%s",&nome);
   printf("informe seu mÊs de nascimento (numeral): ");
   scanf ("%d",&N_mes);
   printf("informe seu ano de nascimento: ");
   scanf ("%d",&N_ano);
   if(data.wMonth >= N_mes){
      idd = data.wYear - N_ano;
   }else{
      idd = data.wYear - N_ano - 1;
   }
   if(data.wHour < 12){
      printf("Bom dia %s ",nome);
      printf("vocÊ tem %d anos",idd);
   }else{
      printf("Boa tarde %s ",nome);
      printf("vocÊ tem %d anos",idd);
   }
}
