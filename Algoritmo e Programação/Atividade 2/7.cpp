#include <stdio.h>    
#include <stdlib.h>
#include <cmath>
int main()
{
 	int idade_anos;
 	printf("\n Informe a idade em anos: ");
 	scanf("%d",&idade_anos);
 	// Entendendo que todo mês possui 30 dias
 	int idade_meses = idade_anos * 12;
 	int idade_dias = idade_meses * 30;
 	printf("\n A pessoa tem %d dias de idade",idade_dias);
 	printf("\n A pessoa tem %d meses de idade",idade_meses);
 	printf("\n A pessoa tem %d anos de idade",idade_anos);
} 
