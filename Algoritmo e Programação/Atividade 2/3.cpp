#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>

// Gabriel Augusto de Souza Morais
// 3. Uma revenda de carros paga a seus vendedores um salário de R$ 1.800,00 fixo, mais R$
// 75,00 para cada carro vendido e uma comissão de 5% sobre cada o total de suas vendas.
// Faça um programa em C que determine o salário final de um vendedor.

int main(void)
{ 
	setlocale(LC_ALL, "Portuguese");

	int salario = 1800;
	int valor_carro = 75;
	int quantidade;

	printf("\n Digite a quantidade de carros vendidos:");
	scanf("%d",&quantidade);

	int vendas = (quantidade * valor_carro);
	int comissao = vendas * 0.05; 
	int salario_final = salario + vendas + comissao;
	
	printf("\n Foram vendidos %d carros", quantidade);
	printf("\n O salario final será de %d", salario_final);
}
