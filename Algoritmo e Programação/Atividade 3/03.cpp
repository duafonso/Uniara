#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>

// Gabriel Augusto de Souza Morais
// 3. Leia um número inteiro do teclado e determine se ele é par ou ímpar.
	
int main(void)
{ 
    setlocale(LC_ALL, "Portuguese");

	int num;

	printf("\n Digite um número: ");
	scanf("%d",&num);

	if(num % 2 == 0)
	{
	    printf("\n O número informado é par");
	} 
    else 
    {
       	printf("\n O número informado é impar"); 
    }
}
