#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>
int main(void)
{ 
    // 8. Sabendo a quantidade de combustível consumido e a quilometragem 
    // percorrida,escreva um algoritmo que calcule a média 
    // de consumo de um dado veículo.
    int litros_combustivel;
    int quilometragem;
    setlocale(LC_ALL, "Portuguese");
    printf("Informe a quantidade de combustível consumido em litros: \n");
    scanf("%d",&litros_combustivel);
    printf("Informe a quilometragem percorrida pelo veículo: \n");
    scanf("%d",&quilometragem);
    int media_consumo =  quilometragem / litros_combustivel;
    printf("\n O veículo consumiu uma média de %d por quilometro percorrido"
    , media_consumo);
}
