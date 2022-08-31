#include <stdio.h>    
#include <stdlib.h>
#include <cmath>
int main()
{
 	int idade_dias;
 	printf("\n Informe a idade em dias: ");
 	scanf("%d",&idade_dias);
 	// Entendendo que todo mês possui 30 dias
 	int idade_meses = idade_dias / 30;
 	int idade_anos = idade_meses / 12;
 	printf("\n A pessoa tem %d dias de idade",idade_dias);
 	printf("\n A pessoa tem %d meses de idade",idade_meses);
 	printf("\n A pessoa tem %d anos de idade",idade_anos);
} 
