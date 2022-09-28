#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>

// Gabriel Augusto de Souza Morais
// 8. Sabendo a quantidade de combustível consumido e a quilometragem 
// percorrida,escreva um algoritmo que calcule a média 
// de consumo de um dado veículo.

int main(void)
{ 
	setlocale(LC_ALL, "Portuguese");

    int litros_combustivel;
    int quilometragem;

    printf("\n Digite a quantidade de combustível consumido em litros:");
    scanf("%d",&litros_combustivel);
    printf("\n Digite a quilometragem percorrida pelo veículo:");
    scanf("%d",&quilometragem);

    int media_consumo =  quilometragem / litros_combustivel;

    printf("\n O veículo consumiu uma média de %d por quilômetro percorrido",media_consumo);
}
