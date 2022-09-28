#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// Gabriel Augusto de Souza Morais
// 4. Faça um programa que calcule o valor de A, dado por:
// Onde N é um número inteiro maior que zero
	
int main(void)
{ 
    setlocale(LC_ALL, "Portuguese");

	int N=5;
	float A;
	int contador;

	for(contador=1;contador<=N;contador++)
	{
		printf("\n N: %d",N);
		printf("\n X: %d",contador-1);
		printf("\n Y: %d",contador);

		printf("\n %d - %d / %d",N,contador-1,contador);
        
		A += (N - (float)(contador-1)) / (float)contador; 

		printf("\n => %.2f",A);
	}
}
