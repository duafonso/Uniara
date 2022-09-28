#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// Gabriel Augusto de Souza Morais
// 9. Crie um algoritmo que o usuário entre com vários números inteiros e positivos e
// imprima o produto dos números ímpares e a soma dos números pares.
	
int main(void)
{ 
    setlocale(LC_ALL, "Portuguese");

	int num, mult=1,som=0;

	while(num >= 0)
    {
        printf("\n Digite um valor inteiro e positivo:");
        scanf("%d",&num);	

        if(num % 2 == 1)
        {
            mult = mult * num;
        } 

        if(num % 2 == 0)
        {
            som = som + num;
        }

        printf("\n Produto dos números ímpares: %d",mult);
        printf("\n Soma dos números pares: %d \n",som);
	}
}
