#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>
int main(void)
{ 
    // 7. Escreva um algoritmo para calcular o volume de um cubo.
    // V = A³ 
    int arestas;
	setlocale(LC_ALL, "Portuguese");
	printf("Informe o valor da arestas: \n");
	scanf("%d",&arestas);
	int volume = (arestas*arestas*arestas);
	printf("\n O volume do cubo de arestas %d é %d",arestas, volume);
}
