#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>
#include <cmath>

// Gabriel Augusto de Souza Morais
// 4. Dados os pontos A de coordenadas A(x1,y1) e B de coordendas (x2,y2), escreva um
// programa em C para calcular a distância entre os dois pontos.

int main(void)
{ 
	setlocale(LC_ALL, "Portuguese");

	int x1, x2;
	int y1, y2;

	printf("\n Digite um valor para x1");
	scanf("%d",&x1);
	printf("\n Digite um valor para x2");
	scanf("%d",&x2);
	printf("\n Digite um valor para y1");
	scanf("%d",&y1);
	printf("\n Digite um valor para y2");
	scanf("%d",&y2);
	
	int calculo = (((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
	int distancia = sqrt(calculo);
	
	printf("\n A distância é %d", distancia);
	
	
}
