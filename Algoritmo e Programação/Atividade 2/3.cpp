#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>
int main(void)
{ 
	int salario = 1800;
	int valor_carro = 75;
	int quantidade;
	printf("Informe a quantidade de carros vendidos: \n");
	scanf("%d",&quantidade);
	int vendas = (quantidade * valor_carro);
	int comissao = vendas * 0.05; 
	int salario_final = salario + vendas + comissao;
	printf("\n Foram vendidos %d carros", quantidade);
	printf("\n O salario final será de %d", salario_final);
}
