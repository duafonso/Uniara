#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>

// Gabriel Augusto de Souza Morais
// 1. Considerando A,B,C e D como variáveis inteiras, crie um programa em Linnguagem C
// para calcular o valor de X

int main(void)
{ 
	setlocale(LC_ALL, "Portuguese");

    int A, B, C, D;

	printf("\n Digite o valor da variável A: ");
	scanf("%d", &A);
	printf("\n Digite o valor da variável B: ");
	scanf("%d", &B);
	printf("\n Digite o valor da variável C: ");
	scanf("%d", &C);
    printf("\n Digite o valor da variável D: ");
	scanf("%d", &D);

    int A_1 = (B / (A + C)) + (4 * A);
    int A_2 = (D - (2 * A)) / 3 + C;
    int X_1 = A_1 / A_2;
    int B_1 = (-1 * B) - (B * B * B) - (4 * A * C) + ( 2 * (A * A));
    int B_2 = ((2 * A) / (B + 1) * (B + 1));
    int X_2 = B_1 / B_2;

	printf("O valor da variável X é %d e da X2 é %d ",X_1,X_2);
}
