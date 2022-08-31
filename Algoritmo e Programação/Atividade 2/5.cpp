
#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>
int main(void)
{ 
	int numero;
	int soma;
	printf("\n Informe um número entre 100 a 999:");
	scanf("%d",&numero);
	if(numero >= 100 && numero <= 999){
	// Exemplo - Entrada de 415
	while( numero > 0 )
    {
    	// Usar o operador aritmético de módulo % 
        soma = soma + (numero % 10);
        // 415 % 10 = 5
        // 41 % 1 = 1
        // 4 % 1 = 4
        numero = numero / 10;
        // 415 / 10 = 41
        // 41 / 10 = 4
        // 4 / 10 = 0.4
    }
	printf("\n A soma dos digitos das casas do número %d é %d", numero, soma);	
	} else
		printf("\n O número informado está inválido");
}
