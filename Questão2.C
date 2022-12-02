//Refaça o exercício 1, agora calculando a média aritmética das notas recebidas pelo
//aluno.

#include<stdio.h>
#include<stdlib.h>
int main(void){

  //Declaração das variáveis
  float nota1, nota2, nota3,  media;
  
  //Entrada de dados  
  printf("Digite a segunda nota do aluno: ");
  scanf("%f",&nota1);
  
  printf("Digite a primeira nota do aluno: ");
  scanf("%f",&nota2);
  
  printf("Digite a primeira nota do aluno: ");
  scanf("%f",&nota3);

  //Processamento
  media = (nota1 + nota2 + nota3) / 2;
  
  //Saída
  printf("Media do aluno = %.1f\n",media);
  
  system("pause");//pausa da tela somente para Windows
  return 0;//retorno da função main  
}