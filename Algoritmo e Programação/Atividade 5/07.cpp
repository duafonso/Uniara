#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// Gabriel Augusto de Souza Morais
// 7. Dada uma sequência de n números, imprimi-la na ordem inversa à da leitura.
	
int main(void)
{ 
    setlocale(LC_ALL, "Portuguese");
    
    int vetor[5];
    int contador;
    
    printf("\n Sequência: ");
    for(contador=0;contador<5;contador++)
    {
    	vetor[contador] = rand()%5;
    	printf("[%d]",vetor[contador]);
	}
	
	printf("\n Sequência Invertida: ");
	for(contador=4;contador>=0;contador--)
	{
		printf("[%d]",vetor[contador]);
	}
}
