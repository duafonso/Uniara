#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>

// Gabriel Augusto de Souza Morais
// 7. Escreva um algoritmo para calcular o volume de um cubo.
// V = A³ 

int main(void)
{ 
	setlocale(LC_ALL, "Portuguese");

    int arestas;

	printf("\n Digite o valor da arestas:");
	scanf("%d",&arestas);

	int volume = (arestas*arestas*arestas);
	printf("\n O volume do cubo de arestas %d é %d",arestas, volume);
}
