#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>

// Gabriel Augusto de Souza Morais
// 12. Escreva um algoritmo que leia 3 números inteiros e mostre o maior deles.
	
int main(void)
{ 
    setlocale(LC_ALL, "Portuguese");

	int x, y, z, pos;

	printf("\n Digite um valor para a variável x: ");
	scanf("%d",&x);
	printf("\n Digite um valor para a variável y: ");
	scanf("%d",&y);
	printf("\n Digite um valor para a variável z: ");
	scanf("%d",&z);

	if (x > y)
    {
        pos = y; y = x; x = pos;
    }
	if (x > z)
    {
        pos = z; z = x; x = pos;
    }
	if (y > z)
    {
        pos = z; z = y; y = pos;
    }
    
	printf("\n O maior núnero inteiro das variáveis é %d",z);
}
