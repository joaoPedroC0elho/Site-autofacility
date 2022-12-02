//5. Escreva um programa que cadastre um aluno a partir de seu RA (Registro Acadêmico), nome e
//de três notas. Em seguida, gere um relatório na tela com essas informações na ordem em que
//foram digitadas.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

typedef struct {
        int ra;
        char nome[100];
        float nota1;
        float nota2;
        float nota3;
} Aluno;


#define QUANTIDADE_DE_ALUNOS 1

int main(){
        Aluno alunos[QUANTIDADE_DE_ALUNOS];

        printf("Dados: nome(sem espacos), ra, nota1, nota2, nota3\n");
        for(int i=0; (i < QUANTIDADE_DE_ALUNOS); i++){
                printf("\nInforme os dados do aluno(%i): ",i+1);
                scanf("%s %i %f %f",alunos[i].nome, &alunos[i].ra,&alunos[i].nota1, &alunos[i].nota2, &alunos[i] .nota3);
        }

        printf("\nra\tNome\tMedia\n");
        for(int i=0; (i < QUANTIDADE_DE_ALUNOS); i++){
                printf("%i\t%s\t%1.2f\n",alunos[i].ra,alunos[i].nome,alunos[i].nota1 + alunos[i].nota2)/2;
        }

        getchar();
        return 0;
}