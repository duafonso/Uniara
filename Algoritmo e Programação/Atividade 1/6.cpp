#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>
int main(void)
{ 
  // 6. Escreva um algoritmo para calcular a área de um círculo.
  // A = π * r²
	float pi = 3.1415;
  float raio;
	setlocale(LC_ALL, "Portuguese");
	printf("Informe o raio para calculo da área: \n");
	scanf("%f",&raio);
	float area = pi * (raio * raio);
	printf("\n A área do círculo de raio %f é %f", raio, area);
}
