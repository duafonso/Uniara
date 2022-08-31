
#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>
#include <cmath>

int main(void)
{ 
	int num;
	
	printf("Informe o número: \n");
	scanf("%d",&num);
	
	if (num >= 100 && num <= 999)
	{
		printf("Você informou o número %d",num);
	} else 
		printf("Número inteiro inválido \n");
}
