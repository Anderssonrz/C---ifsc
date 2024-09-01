/*Escreva um algoritmo que receba a temperatura em graus Celsius e apresente-a em graus
Fahrenheit, de acordo com a fórmula ºF = (1.8 ºC) + 32.*/

    #include<stdio.h>
    void main(){
       int celsius;
       float fahrenheit;

       printf("A temperatura em celsius: ");
       scanf("%d",&celsius);

       fahrenheit = (celsius*1.8)+32;

       printf("O resultado em :%f", fahrenheit);
    }
