#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>

// Gabriel Augusto de Souza Morais
// 6. Escreva um algoritmo para calcular a área de um círculo.
// A = π * r²

int main(void)
{ 
	setlocale(LC_ALL, "Portuguese");

	float pi = 3.1415;
  	float raio;

	printf("\n Digite o raio para cálculo de área:");
	scanf("%f",&raio);

	float area = pi * (raio * raio);
	printf("\n A área do círculo de raio %f é %f", raio, area);
}
