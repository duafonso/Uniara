#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>

// Gabriel Augusto de Souza Morais
// 1. Faça um programa que, dada uma matriz de ordem N, gere:
// A. Matriz Identidade
// B. Matriz com todos os elementos iguais a 1

int main(void)
{ 
    setlocale(LC_ALL, "Portuguese");

	int matriz[3][3];
	int linha,coluna;

	for (linha=0;linha<3;linha++) 
	{
	    for (coluna=0;coluna<3;coluna++) 
		{
	        if(linha==coluna)
			{
	        	matriz[linha][coluna] = 1;
			} 
			else 
			{
				matriz[linha][coluna] = 0;
			}
	    printf("[%d]", matriz[linha][coluna]);
	    }
	printf("\n");
	}

	printf("\n");

	for (linha=0;linha<3;linha++) 
	{
	    for (coluna=0;coluna<3;coluna++) 
		{
	        matriz[linha][coluna] = 1;
	        printf("[%d]", matriz[linha][coluna]);
	    }
	    printf("\n");
	}
}
