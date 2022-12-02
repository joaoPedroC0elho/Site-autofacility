/*Escreva um programa que solicita o nome e a data de nascimento do usuário,
calcule a sua idade atual e grave os dados em um um arquivo chamado
“arq01.txt”. O programa deve imprimir na tela o conteúdo atual do arquivo, a
cada nova entrada.#include <stdio.h>
#include <stdlib.h>*/
int main(void)
{
	FILE *pont_arq; // cria variável ponteiro para o arquivo
	char nome[20]; // variável do tipo string
	 int ano_atual, ano_de_nascimento, dia_atual, dia_de_nascimento, idade;
    int mes_atual, mes_de_nascimento;
	//abrindo o arquivo com tipo de abertura w
	pont_arq = fopen("arq01.txt", "w");
	
	//testando se o arquivo foi realmente criado
	if(pont_arq == NULL)
	{
	printf("Erro na abertura do arquivo!");
	return 1;
	}
	
	printf("Escreva o nome do usuario para gravacao de arquivo: ");
	scanf("%s", nome);
	printf ("Digite o valor do ano atual: ");
    scanf ("%d", &ano_atual);
    (void) getchar ();
    printf ("Digite o valor do ano de nascimento: ");
    scanf ("%d", &ano_de_nascimento);
    (void) getchar ();
    printf ("Digite o valor do dia atual: ");
    scanf ("%d", &dia_atual);
    (void) getchar ();
    printf ("Digite o valor do dia de nascimento: ");
    scanf ("%d", &dia_de_nascimento);
    (void) getchar ();
    printf ("Digite o valor do mes atual: ");
    scanf ("%d", &mes_atual);
    (void) getchar ();
    printf ("Digite o valor do mes de nascimento: ");
    scanf ("%d", &mes_de_nascimento);
    (void) getchar ();
    idade=ano_atual-ano_de_nascimento;
    if(mes_de_nascimento > mes_atual || (mes_de_nascimento == mes_atual && dia_de_nascimento > dia_atual))
        idade=idade-1;
	//usando fprintf para armazenar a string no arquivo
	fprintf(pont_arq, "%s", nome);
	fprintf(pont_arq, "%d", idade);
	// usando fclose para fechar o arquivo
	fclose(pont_arq);
	
	printf("Dados gravados com sucesso!");
	
	
	return(0);
}