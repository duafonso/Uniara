// 1. Considerando A, B, C e D como variáveis inteiras, 
// crie um programa em Linguagem C para calcular o valor de X

#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>

int main(void)
{ 
	// Declaração das Variáveis em Tipo Inteiro ( Utilizando // para ser Comentário)
	int A, B, C, D, X;
	// Configurando para acentuação com o idioma português ( Utilizando // para ser Comentário)
	setlocale(LC_ALL, "Portuguese");

		// printf exibirá a mensagem no prompt / terminal para o usuário
		printf("Informe o valor da variável A: ");
		scanf("%d", &A);
		// %d é referente a números decimais inteiros e &A é a váriavel que vai receber 
		
		// printf exibirá a mensagem no prompt / terminal para o usuário
		printf("Informe o valor da variável B: ");
		scanf("%d", &B);
		// %d é referente a números decimais inteiros e &A é a váriavel que vai receber 
		
		// printf exibirá a mensagem no prompt / terminal para o usuário
		printf("Informe o valor da variável C: ");
		scanf("%d", &C);
		// %d é referente a números decimais inteiros e &A é a váriavel que vai receber 
		
		// printf exibirá a mensagem no prompt / terminal para o usuário
		printf("Informe o valor da variável D: ");
		scanf("%d", &D);
		// %d é referente a números decimais inteiros e &A é a váriavel que vai receber 

	// Execução do Cálculo do Resultado
	// Tentar utilizar X = ((B / A + C) + (4 * A)) / ((D - 2 * A) / ( 3 + C ))
	X = A + B;

	// Apresentação da Variável Resultado em X
	printf("O valor da variável X é %d ", X);
	
	return 0;
}
