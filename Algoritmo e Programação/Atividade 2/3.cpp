#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>

int main(void)
{ 
	float salario = 1800;
	float valor_carro = 75;
	int quantidade;
	
	printf("Informe a quantidade de carros vendidos: \n");
	scanf("%d",&quantidade);
	
	float vendas = (quantidade * valor_carro);
	float comissao = vendas / 
	float salario_final = salario + vendas + comissao;
	
	printf("\n Foram vendidos %d carros", quantidade);
	printf("\n O salario final será de %f", salario_final);
}
