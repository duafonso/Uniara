#include <stdio.h>    
#include <stdlib.h>
#include <cmath>
int main()
{
	int nota_1;
	int nota_2;
	int nota_3;
	
	printf("\n Informe a nota 1 do aluno:");
	scanf("%d",&nota_1);
	printf("\n Informe a nota 2 do aluno:");
	scanf("%d",&nota_2);
	printf("\n Informe a nota 3 do aluno:");
	scanf("%d",&nota_3);
	
	int media = ((nota_1 * 2) + (nota_2 * 3) + (nota_3 * 5)) / ( 2 + 3 + 5);
	printf("\n A média final do aluno é %d ", media);
} 
