#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>
#include <cmath>

// Gabriel Augusto de Souza Morais
// 8. Faça um algoritmo que leia a idade de uma pessoa expressa em dias e mostre-a
// expressa em anos, meses e dias.

int main(void)
{ 
	setlocale(LC_ALL, "Portuguese");

 	int idade_dias;

 	printf("\n Digite a idade em dias: ");
 	scanf("%d",&idade_dias);

 	int idade_meses = idade_dias / 30;
 	int idade_anos = idade_meses / 12;
	
 	printf("\n A pessoa tem %d dias de idade",idade_dias);
 	printf("\n A pessoa tem %d meses de idade",idade_meses);
 	printf("\n A pessoa tem %d anos de idade",idade_anos);
} 
