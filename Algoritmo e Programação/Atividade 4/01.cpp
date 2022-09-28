#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// Gabriel Augusto de Souza Morais
// 1. Construa um programa em C que para um grupo de 50 números inteiros lidos do
// teclado, determine:
// a. A soma dos números positivos
// b. A quantidade de números negativos
// c. A média dos números ímpares
	
int main(void)
{ 
    setlocale(LC_ALL, "Portuguese");

	int num [5], contador;
	int soma = 0;
	int neg_qt = 0;
	int med_qt = 0;

	for(contador=1;contador<=5;contador++)
    {
		printf("\n Digite o valor %d:",contador);
		scanf("%d",&num[contador]);

		if(num[contador] >= 1)
        {
			soma += num[contador];
		}
		if(num[contador] < 0 )
        {
			neg_qt += 1;
		}
		if(num[contador] % 2 == 1)
        {
			int imp_qt = 0, imp_sm = 0;
			imp_qt += 1;
			imp_sm += num[contador];
			med_qt = (imp_sm / imp_qt);
		}
	}
	printf("\n A soma dos números positivos é %d",soma);
	printf("\n A quantidade de números negativos é %d",neg_qt);
	printf("\n A média dos números impares é %d",med_qt);
}
