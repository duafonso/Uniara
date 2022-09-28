#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// Gabriel Augusto de Souza Morais
// 2. Faça um programa em C que imprima todos os números pares compreendido entre 85
// e 907. O programa também deve exibir a soma destes valores.
	
int main(void)
{ 
    setlocale(LC_ALL, "Portuguese");

	int numero,calc,soma_pares;

    for(numero=85;numero<=907;numero++)
    {
        calc = numero % 2;
        if(calc == 0) 
        {
        	soma_pares = (soma_pares+numero);
        }
    } printf("\n Soma dos pares 85 entre 907: %d",soma_pares);
}
