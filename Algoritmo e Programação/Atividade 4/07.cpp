#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// Gabriel Augusto de Souza Morais
// 7. Construa um programa que para um conjunto de N números reais, determine o valor
// máximo e o valor mínimo digitados.
	
int main(void)
{ 
    float num, max, min;
	int contador = 3;

	while(contador > 0)
    {
        contador--;
        printf("\n Digite um valor:");
        scanf("%f",&num);

            if (num > max)
            {
                max = num;
                min = max;
            }
            if (num < min)
            {
                min = num;
            }	
	}

	printf("\n Máximo: %f",max);
	printf("\n Mínimo: %f",min);
}
