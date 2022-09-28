#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// Gabriel Augusto de Souza Morais
// 8. Tentando descobrir se um dado era viciado, um dono de cassino honesto o lançou N
// vezes. Dados os N resultados dos lançamentos, determinar o número de ocorrências
// de cada face.
	
int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[5];
	int contador,contador_aux,cont;
	int aux;

    for(contador=0;contador<5;contador++)
	{
		vetor[contador] = rand()%6;
		printf("[%d] ",vetor[contador]);
    }
    
    printf("\n");
    
    for(contador=0;contador<5;contador++)
	{
        for(contador_aux=(contador+1);contador_aux<5;contador_aux++)
		{
            if(vetor[contador]>vetor[contador_aux])
			{
                aux=vetor[contador];
                vetor[contador]=vetor[contador_aux];
                vetor[contador_aux]=aux;
            }
        }
    }
    
    cont = 1; 
    for(contador=1;contador<5;contador++)
	{
        if(vetor[contador] == vetor[contador-1])
		{ 
            cont++;
        }
        else { 
           	printf("\n Quantidade de Lançamentos na Face [%d] : [%d]", vetor[contador-1], cont);
            cont = 1;
        }
    }
    printf("\n Quantidade de Lançamentos na Face [%d] : [%d]", vetor[contador-1], cont);
    
    return 0;
}