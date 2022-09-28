#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>

// Gabriel Augusto de Souza Morais
// 4.Um hotel cobra R$ 262,50 a diária e uma taxa de serviços conforme:
// a.R$ 17,50 por dia se a quantidade de diárias for maior que 15;
// b.R$ 18,75 por dia se a quantidade de diárias for igual a 15;
// c.R$ 21,05 por dia se a quantidade de diárias for menor que 15;
// Construa um programa em Linguagem C que mostre a quantidade de diárias, o valor de diárias, o valor da taxa de serviços e o valor total a ser pago.
	
int main(void)
{ 
    setlocale(LC_ALL, "Portuguese");

	float valor_diarias = 262.50;
	float taxa, total;
	int quantidade_diarias;

	printf("\n Informe a quantidade de diárias: ");
	scanf("%d",&quantidade_diarias);

	if(quantidade_diarias > 15)
    {
		valor_diarias = (valor_diarias) * quantidade_diarias;
		taxa = (17.50) * quantidade_diarias;
		total = valor_diarias + taxa;

	    printf("\n Quantidade de diarias: %d",quantidade_diarias);
	    printf("\n Valor das diarias: R$ %f",valor_diarias);
	    printf("\n Valor das taxas de serviço: R$ %f",taxa);
	    printf("\n Total a ser pago: R$ %f",total);
	} 

	if(quantidade_diarias == 15)
    {
		valor_diarias = (valor_diarias) * quantidade_diarias;
		taxa = (18.75) * quantidade_diarias;
		total = valor_diarias + taxa;
		
        printf("\n Quantidade de diarias: %d",quantidade_diarias);
        printf("\n Valor das diarias: R$ %f",valor_diarias);
        printf("\n Valor das taxas de serviço: R$ %f",taxa);
        printf("\n Total a ser pago: R$ %f",total);
	} 

	if (quantidade_diarias < 15)
    {
		valor_diarias = (valor_diarias) * quantidade_diarias;
		taxa = (21.05) * quantidade_diarias;
		total = valor_diarias + taxa;
		
        printf("\n Quantidade de diarias: %d",quantidade_diarias);
        printf("\n Valor das diarias: R$ %f",valor_diarias);
        printf("\n Valor das taxas de serviço: R$ %f",taxa);
        printf("\n Total a ser pago: R$ %f",total);
	} 
}
