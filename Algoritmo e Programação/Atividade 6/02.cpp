#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>

// Gabriel Augusto de Souza Morais
// 2. Faça um programa em C que, para uma matriz 20 x 10, efetue a soma dos elementos
// em cada uma das linhas e escreva a soma. O programa também deve exibir o número
// da linha que possui maior soma.

int main(void)
{ 
    setlocale(LC_ALL, "Portuguese");

	int matriz[20][10];
	int linha,coluna,soma=0;
	int soma_linhas[20];
	int aux=0,pos=0;
	
	for (linha=0;linha<20;linha++) 
	{
		for (coluna=0;coluna<10;coluna++) 
		{
		    matriz[linha][coluna] = rand()%5;
		     printf("[%d]", matriz[linha][coluna]);
		    }
		printf("\n");
	}

	for (linha=0;linha<20;linha++) 
	{
		soma=0;
		for (coluna=0;coluna<10;coluna++) 
		{
		    soma += matriz[linha][coluna];
		}
		    soma_linhas[linha] = soma;
	}

	for (linha=0;linha<20;linha++) 
	{
		if(soma_linhas[linha] > aux)
		{
			aux = soma_linhas[linha];
			pos = linha;
		}
		printf("\n Soma da Linha [%d]: [%d]",linha,soma_linhas[linha]);
	}
	printf("\nLinha com maior somatória: [%d] com valor [%d]",pos,aux);
}
