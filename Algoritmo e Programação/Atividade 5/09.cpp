#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>

// Gabriel Augusto de Souza Morais
// 9. Dada uma sequência de N números reais, determinar os números que compõesm a
// sequência e o número de vezes que cada um deles ocorre na mesma.
// A. Exemplo: N = 8
// Sequência: -1.7, 3.0, 0.0, 1.5, 0.0, -1,7, 2.3, -1,7
// Saída: 3,0 ocorre 1 vez, 0.0 ocorre 2 vezes, 1.5 ocorre 1 vez
	
int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	srand((unsigned int)time(NULL));
	
	float vetor[8],limite=5.0;
	int contador,contador_aux,cont;
	int aux;

	printf("Sequência: ");
    for(contador=0;contador<5;contador++)
	{
		vetor[contador] = (float(rand())/float((RAND_MAX)) * limite);
		printf("[%f] ",vetor[contador]);
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
    
    printf("Saída: \n");
    for(contador=1;contador<5;contador++)
	{
        if(vetor[contador] == vetor[contador-1])
		{ 
            cont++;
        }
        else { 
           	printf("\n [%.2f] ocorre [%d] vezes", vetor[contador-1], cont);
            cont = 1;
        }
    }
    printf("\n [%.2f] ocorre [%d] vezes", vetor[contador-1], cont);
    
    return 0;
}