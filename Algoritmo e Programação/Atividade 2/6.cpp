#include <stdio.h>    
#include <stdlib.h>
#include <cmath>
int main()
{
	int prova_1;
	int prova_2;
	int prova_3;
	
	printf("\n Informe a nota da Prova 1:");
	scanf("%d",&prova_1);
	printf("\n Informe a nota da Prova 2:");
	scanf("%d",&prova_2);
	printf("\n Informe a nota da Prova 3:");
	scanf("%d",&prova_3);
	
	int media = ((prova_1 * 2) + (prova_2 * 4) + (prova_3 * 6)) / ( 2 + 4 + 6);
	printf("\n A média final na disciplina é %d ", media);
} 
