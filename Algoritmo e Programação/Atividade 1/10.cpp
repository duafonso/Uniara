#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>

// Gabriel Augusto de Souza Morais
// 10. Escreva um algoritmo que leia três números inteiros e mostre o maior deles.

int main(void)
{ 
	setlocale(LC_ALL, "Portuguese");
    int n1, n2, n3;

    printf("Informe o valor do número 1: \n");
    scanf("%d",&n1);
    printf("Informe o valor do número 2: \n");
    scanf("%d",&n2);
    printf("Informe o valor do número 3: \n");
    scanf("%d",&n3);

    if(n1 >= n2 and n1 >= n3)
    {
        printf("\n O número 1 possui o valor %d e assim é o maior",n1);
    }
    if(n2 >= n1 and n2 >= n3)
    {
        printf("\n O número 2 possui o valor %d e assim é o maior",n2); 
    } 
    if(n3 >= n1 and n1 >= n2)
    {
    printf("\n O número 3 possui o valor %d e assim é o maior",n3);
    }
}
