#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>
#include <cmath>

// Gabriel Augusto de Souza Morais
// 9. Faça um algoritmo que leia as 3 notas de um aluno e calcule a média final deste aluno.
// Considerar que a média é ponderada e que o peso das notas é: 2,3 e 5, respectivamente.

int main(void)
{ 
	setlocale(LC_ALL, "Portuguese");

	int nota_1;
	int nota_2;
	int nota_3;
	
	printf("\n Digite a nota 1 do aluno:");
	scanf("%d",&nota_1);
	printf("\n Digite a nota 2 do aluno:");
	scanf("%d",&nota_2);
	printf("\n Digite a nota 3 do aluno:");
	scanf("%d",&nota_3);
	
	int media = ((nota_1 * 2) + (nota_2 * 3) + (nota_3 * 5)) / ( 2 + 3 + 5);
	printf("\n A média final do aluno é %d ", media);
} 
