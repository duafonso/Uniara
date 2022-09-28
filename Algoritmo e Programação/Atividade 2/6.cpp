#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>

// Gabriel Augusto de Souza Morais
// 6. O sistema de avaliação de uma disciplina é composto por 3 provas. A primeira prova
// tem peso 2, a segunda prova tem peso 4 e a terceira prova tem peso 6. Faça um programa
// em C para calcular a méia final desta disciplina.

int main(void)
{ 
	setlocale(LC_ALL, "Portuguese");

	int prova_1;
	int prova_2;
	int prova_3;
	
	printf("\n Digite a nota da Prova 1:");
	scanf("%d",&prova_1);
	printf("\n Digite a nota da Prova 2:");
	scanf("%d",&prova_2);
	printf("\n Digite a nota da Prova 3:");
	scanf("%d",&prova_3);
	
	int media = ((prova_1 * 2) + (prova_2 * 4) + (prova_3 * 6)) / ( 2 + 4 + 6);
	printf("\n A média final na disciplina é %d ", media);
} 
