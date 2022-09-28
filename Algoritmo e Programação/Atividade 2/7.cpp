#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>
#include <cmath>

// Gabriel Augusto de Souza Morais
// 7. Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias
// e mostre-a expressa apenas em dias.

int main(void)
{ 
	setlocale(LC_ALL, "Portuguese");

 	int idade_anos;

 	printf("\n Digite a idade em anos: ");
 	scanf("%d",&idade_anos);

 	int idade_meses = idade_anos * 12;
 	int idade_dias = idade_meses * 30;

 	printf("\n A pessoa tem %d dias de idade",idade_dias);
 	printf("\n A pessoa tem %d meses de idade",idade_meses);
 	printf("\n A pessoa tem %d anos de idade",idade_anos);
} 
