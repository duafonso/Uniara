
#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>
#include <cmath>

int main(void)
{ 
	int x1, x2;
	int y1, y2;
	printf("Informe o valor para x1 \n");
	scanf("%d",&x1);
	printf("Informe o valor para x2 \n");
	scanf("%d",&x2);
	printf("Informe o valor para y1 \n");
	scanf("%d",&y1);
	printf("Informe o valor para y2 \n");
	scanf("%d",&y2);
	
	int calculo = (((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
	int distancia = sqrt(calculo);
	printf("\n A distância é %d", distancia);
	
	
}
