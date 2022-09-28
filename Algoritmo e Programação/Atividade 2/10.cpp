#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>
#include <cmath>

// Gabriel Augusto de Souza Morais
// 10. Faça um algoritmo que leia o tempo de duração de um evento em uma fábrica expressa
// em segundos e mosre-o expresso em horas, minutos e segundos.

int main(void)
{ 
	setlocale(LC_ALL, "Portuguese");

	int segundos;

	printf("\n Digite os segundos:");
	scanf("%d",&segundos);

	int minutos = segundos / 60;
	int horas = minutos / 60;

	printf("\n %d Segundos",segundos);
	printf("\n %d Minutos",minutos);
	printf("\n %d Horas",horas);
} 
