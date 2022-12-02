//1. Escreva um programa que receba do usuário (interativamente) três notas para dado aluno,
//armazenando-as em um vetor; em seguida, o programa deve imprimir na tela tais notas.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

int main() {

    int i;
    int num2[4];

    for(i = 0; i < 4 ; i++){ // preenche o vetor lendo do teclado
        printf("Digite as notas do aluno %d: ", i);
        scanf("%d", &num2[i]);
    }

    printf("\n\n");
    for(i = 0; i < 4 ; i++)   // imprime o vetor
        printf("%d ", num2[i]);
    printf("\n\n");

    return 0;
}