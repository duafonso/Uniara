#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>

// Gabriel Augusto de Souza Morais
// 10. Elaborar um algoritmo que lê 2 valores a e b e os escreve com a mensagem: 
// "São múltiplos" ou "Não são múltiplos".
	
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
        printf("\n São múltiplos");
    }
	else
    {
        printf("\n Não são múltiplos");
    } 
}
