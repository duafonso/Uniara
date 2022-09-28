#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>

// Gabriel Augusto de Souza Morais
// 8. Construa um programa em C que leia dois valores inteiros e determine se um é múltiplo do outro.
	
int main(void)
{ 
    setlocale(LC_ALL, "Portuguese");

	int x, y;

	printf("\n Digite um valor para a variável x: ");
	scanf("%d",&x);
	printf("\n Digite um valor para a variável x: ");
	scanf("%d",&y);

	if (x % y == 0 ) 
    { 
        printf("\n Os valores são múltiplos um do outro");
    }
	else 
    {
        printf("\n Os valores não são múltiplos um do outro");
    }
}
