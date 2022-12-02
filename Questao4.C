//4. Escreva um programa que receba uma string  de caracteres minúsculos a partir do usuário e
//conte o número de elementos dessa string ; na sequência, o programa deve converter os
//caracteres para maiúsculos.
//Este programa usa a funcao "toupper" que converte um caracter para maiuscula.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

int main()
{
    int i, TamStr;
    char Str[30];
    scanf("%s", Str);
    TamStr = strlen(Str);
    for(i=0; i<TamStr; i++)
    {                            // Converte cada caracter de Str
     Str[i] = toupper (Str[i]);  // para maiusculas
    }
    printf("%s",Str);
    getch();
}