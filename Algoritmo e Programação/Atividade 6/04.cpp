#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>

// Gabriel Augusto de Souza Morais
// 4. Faça um programa que, para uma matriz quadrada de ordem N, de elementos inteiros,
// imprima esta matriz, identificando o número da linha e da coluna cujo elemento está
// sendo impresso. O programa também deve calcular e imprimir a soma dos elementos
// situados abaixo da diagonal principal da matriz, incluindo os elementos da própria
// diagonal.

int main(void)
{ 
	setlocale(LC_ALL, "Portuguese");

	int matriz[3][3];
	int linha,coluna,soma;
	int soma_linhas[25];
	
    for (linha=0;linha<3;linha++) 
	{
        for (coluna=0;coluna<3;coluna++) 
		{
            matriz[linha][coluna] = rand()%2;
        }
    }

	for (linha=0;linha<3;linha++) 
	{
	    for (coluna=0;coluna<3;coluna++) 
		{
	        printf("| %d x %d: [%d]|",linha,coluna,matriz[linha][coluna]);
	        }
	        printf("\n");
	    }

   	for (linha=0;linha<3;linha++) 
	{
        for (coluna=0;coluna<3;coluna++) 
		{
            if(linha > coluna || linha == coluna)
			{
            	soma += matriz[linha][coluna];
			}
        } 
    }  
    printf("\n Soma dos Elementos: %d",soma);
}
