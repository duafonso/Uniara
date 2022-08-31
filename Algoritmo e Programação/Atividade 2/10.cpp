#include <stdio.h>    
#include <stdlib.h>
#include <cmath>
int main()
{
	int segundos;
	printf("\n Informe os segundos:");
	scanf("%d",&segundos);
	int minutos = segundos / 60;
	int horas = minutos / 60;
	printf("\n %d Segundos",segundos);
	printf("\n %d Minutos",minutos);
	printf("\n %d Horas",horas);
} 
