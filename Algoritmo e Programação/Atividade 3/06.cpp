#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>

// Gabriel Augusto de Souza Morais
// 6. Faça um programa em C que calcule o peso ideal de uma pessoa adulta, 
// lendo do teclado seu peso e altura. Para cálculo do peso ideal utilize as seguintes fórmulas:
// a.Homens  P = 72,7 * altura - 58
// b.Mulheres  P = 62,1 * altura - 44,7
	
int main(void)
{ 
    setlocale(LC_ALL, "Portuguese");

	int sexo; float altura;

	printf("\n Digite a altura da pessoa adulta: ");
	scanf("%f",&altura);
	printf("\n Digite 1 para Masculino ou 2 para Feminino: ");
	scanf("%d",&sexo);

	if(sexo == 1 ) 
    {
		float P = 72.7 * (altura) - 58;
		printf("\n O peso ideal da pessoa adulta do sexo masculino com %f de altura é de %f kg",altura,P);
	} 
    else 
    {
		float P = 62.1 * (altura) - 44.7;
		printf("\n O peso ideal da pessoa adulta do sexo feminino com %f de altura é de %f kg",altura,P);
	}
}
