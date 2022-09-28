#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>

// Gabriel Augusto de Souza Morais
// 5.Faça um programa que leia 3 valores reais e verifique se eles permitem formar um triângulo. 
// Caso seja possível, especificar o tipo de triângulo que será formado. 
// Para que os valores possam representar os lados de um triângulo, 
// é necessário que um dos lados seja menor que a soma dos outros 2 lados. 
// Um triângulo pode ser classificado como equilátero, quando todos os lados são iguais; 
// isósceles, quando apenas 2 lados são iguais; 
// e escaleno, quando todos os lados são diferentes.
	
int main(void)
{ 
    setlocale(LC_ALL, "Portuguese");

	float x,y,z;

	printf("\n Digite um valor para a variável x: ");
	scanf("%f",&x);
	printf("\n Digite um valor para a variável y: ");
	scanf("%f",&y);
	printf("\n Digite um valor para a variável z: ");
	scanf("%f",&z);

	if( x < (y + z) || y < (x + z) || z < (x + y))
    {
		if (x == y == z) 
        {
			printf("\n Classificado como triângulo equilátero");
		}
		if ( (x == y && z != x ) || (x == z && y != x) || (y == z && x != z)) 
        {
			printf("\n Classificado como triângulo isósceles");
		}
		if (x != y && x != z && y != z) 
        {
			printf("\n Classificado como triângulo escaleno");
		}
	} 
    else 
    { 
        printf("\n Não pode ser classificado como triângulo");
    }
}
