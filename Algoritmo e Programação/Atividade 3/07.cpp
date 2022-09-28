#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>

// Gabriel Augusto de Souza Morais
// 7. Faça um programa em C que leia 3 valores inteiros e os imprima na ordem crescente..
	
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

	if (x > y){pos = y; y = x; x = pos;}
	if (x > z){pos = z; z = x; x = pos;}
	if (y > z){pos = z; z = y; y = pos;}

	printf("\n Ordem Crescente: %d %d %d",x,y,z);
}
