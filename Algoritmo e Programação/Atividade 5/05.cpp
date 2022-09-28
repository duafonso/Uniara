#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// Gabriel Augusto de Souza Morais
// 5. Dado um vetor de 30 números inteiros, exiba:
// A. A localização do primeiro número negativo
// B. A quantidade de números pares
// C. A média dos números ímpares
// D. O maior número primo
	
int main(void)
{ 
    setlocale(LC_ALL, "Portuguese");
    
    int vetor[5];
    int contador;
    int lim_neg=0,pos_neg;
    int cont_p=0;
	int med_i=0,cont_i=0;
    
    for(contador=0;contador<5;contador++)
	{
		printf("\n Digite um valor:");
		scanf("%d",&vetor[contador]);
		
		if(vetor[contador] < 0)
		{
			lim_neg = 1;
			if(lim_neg == 1)
			{
				pos_neg = contador;
			}
		}
		
		if(vetor[contador] % 2 == 0)
		{
			cont_p++;
		}
		
		if(vetor[contador] % 2 == 1)
		{
			cont_i++;
			med_i += vetor[contador]; 
		}
		
	}
	
		
	med_i = (med_i / cont_i);
	
	printf("\n Localização do primeiro número negativo: %d",pos_neg);
	printf("\n Quantidade de números pares: %d",cont_p);
	printf("\n A média dos números ímpares: %d",med_i);
	printf("\n O maior número primo: %d",mao_p);

}
