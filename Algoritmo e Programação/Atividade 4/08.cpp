#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// Gabriel Augusto de Souza Morais
// 8. Sem utilizar a operação de multiplicação, faça um programa que multiplique 2
// números inteiros lidos do teclado
	
int main(void)
{ 
    setlocale(LC_ALL, "Portuguese");

	int numero_1, numero_2, contador;
	int multiplicacao = 0;
	
	printf("\n Digite um valor para variável 1:");
	scanf("%d",&numero_1);
	printf("\n Digite um valor para variável 1:");
	scanf("%d",&numero_2);

	for(contador=1;contador<=numero_1;contador++)
	{
		multiplicacao += numero_2;
	}
    
	printf("\n Resultado da multiplicação: %d",multiplicacao);
}
