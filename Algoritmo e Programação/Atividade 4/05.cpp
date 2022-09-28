#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// Gabriel Augusto de Souza Morais
// 5. Construa um programa que, para a progressão geométrica 3, 9, 27, 81, ... 6561,
// determine a soma de seus termos. Construa um algoritmo que obrigue o computador
// a gerar automaticamente cada um dos termos a ser somado.
// Sn = (a¹ * (q^N - 1)) / q - 1
	
int main(void)
{ 
    setlocale(LC_ALL, "Portuguese");

	int prime_termo = 3;
	int razao_termo = 3;
	int quant_termo, contador;

    printf("\n Digite a quantidade de termos: ");
    scanf("%d",&quant_termo);

	int termo = quant_termo;

    for(contador=0;contador<=quant_termo-1;contador++)
	{
	    printf("\n O termo da posição %d  = %d",contador,termo);
	    termo=(termo*razao_termo);
    }

   	int pg=((prime_termo*(pow(razao_termo,quant_termo)-1))/(razao_termo-1));
    
    printf("\n A soma dos termos da Progressão Geométrica é: %d",pg);
}
