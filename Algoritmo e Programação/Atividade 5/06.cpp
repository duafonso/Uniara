#include <stdio.h>    
#include <stdlib.h>
#include<string.h>
#include <locale.h>
#include <math.h>

// Gabriel Augusto de Souza Morais
// 6. Faça um programa que leia um vetor de caractere de 20 posições e inverta a 1º
// posição com a da 20º, a 2º com a 19º, e assim por diante. Imprima o vetor antes e depois
// da inversão.
	
int main()
{
    char vetor_p[20];
    char vetor_i[20];
	int contador, aux=0;
	
	printf("\n Digite a String: ");
    scanf("%s",vetor_p);
    
    for(contador=strlen(vetor_p)-1;contador>=0;contador--) 
	{
        vetor_i[aux] = vetor_p[contador];
        aux += 1;
    }
    
    vetor_i[aux] = '\0';

    printf("\n String Invertida: [%s]",vetor_i); 
    return 0;
}