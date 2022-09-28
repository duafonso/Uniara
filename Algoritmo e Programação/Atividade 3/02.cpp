#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>

// Gabriel Augusto de Souza Morais
// 2. Uma empresa de vendas oferece para seus clientes um desconto em função do valor da compra realizada. 
// Este desconto é de 20% se o valor da compra for maior ou igual a R$ 5.000,00 e de 15% de for menor.
// Faça um programa em linguagem C para exibir o valor da compra realizada, o valor do desconto e o total a ser pago pelo cliente.
	
int main(void)
{ 
   float compra, desconto, total;

    printf("\n Digite o valor da compra: ");
	scanf("%f",&compra);

	if (compra >= 5000)
    {
		desconto = (20 * compra)/100;
 		total = compra - desconto;
 		printf("\n O valor da compra é de R$ %f",compra);
		printf("\n O valor do desconto será de R$ %f",desconto);
		printf("\n O valor a ser pago será de R$ %f",total);
	} 
    else
    {
        desconto = (15 * compra)/100;
 		total = compra - desconto;
 		printf("\n O valor da compra é de R$ %f",compra);
		printf("\n O valor do desconto será de R$ %f",desconto);
		printf("\n O valor a ser pago será de R$ %f",total);
    }
}
