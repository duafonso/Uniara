#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>

// Gabriel Augusto de Souza Morais
// 2, Faça um programa em C para calcular o volume de uma esfera de Raio R.

int main(void)
{ 
	setlocale(LC_ALL, "Portuguese");

	int r;
	float pi = 3.1415;

	printf("\n Digite o raio:");
	scanf("%d", &r);

	float volume = ( 4 * pi * (r*r*r) );
	printf("\n O volume é %f", volume);
	return 0;
}
