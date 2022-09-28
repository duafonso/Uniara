#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>

// Gabriel Augusto de Souza Morais
// 1. Escreva um programa em Linguagem C que leia um número inteiro do teclado e 
// determine se este é positivo ou negativo.
	
int main(void)
{ 
    setlocale(LC_ALL, "Portuguese");

	int num;

	printf("\n Digite um número: ");
	scanf("%d",&num);

	if(num > 0)
	{
		printf("\n O número informado é positivo");
	} 
    else
    {
        printf("\n O número informado é negativo");
    }
}
