#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>

// Gabriel Augusto de Souza Morais
// 5. Faça um programa em C que armanzene um número inteiro de até 3 digitos (até 999) e
// determine a soma de seus dígitos. Ex: 397 -> 3 + 9 + 7 = 19.

int main(void)
{ 
	setlocale(LC_ALL, "Portuguese");

	int numero;
	int soma;

	printf("\n Digite um número entre 100 a 999:");
	scanf("%d",&numero);

	if(numero >= 100 && numero <= 999)
	{
		while( numero > 0 )
		{
			soma = soma + (numero % 10);
			numero = numero / 10;
		}
	printf("\n Soma: [%d]",soma);	
	} 
	else
		printf("\n Digite outro número válido.");
}
