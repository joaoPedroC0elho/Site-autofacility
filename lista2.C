//1. Declare um ponteiro para um número inteiro.
#include <stdio.h>
#include <stdlib.h>
int main(){

int x;
int *p = &x;

printf("digite um numero inteiro\n");
scanf("%d",&x);

printf("Valor de x = %d \n", x);
printf("Valor de x acessado pelo ponteiro = %d \n", *p);

system("pause");
}