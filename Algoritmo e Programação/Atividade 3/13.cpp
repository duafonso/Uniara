#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>

// Gabriel Augusto de Souza Morais
// 13. Escreva um algoritmo que leia o código de um aluno e suas três notas. 
// Calcule a média ponderada do aluno, considerando que o peso para a maior nota seja 4 e para as duas restantes, 3. 
// Mostre o código do aluno, suas três notas, 
// a média calculada e uma mensagem "APROVADO" se a média for maior ou igual a 5 e "REPROVADO" se a média for menor que 5.

	
int main(void)
{ 
    setlocale(LC_ALL, "Portuguese");

	float x, y, z;
	int codigo, pos;

	printf("\n Digite o código do aluno: ");
	scanf("%d",&codigo);
	printf("\n Digite a nota 1: ");
	scanf("%f",&x);
	printf("\n Digite a nota 1: ");
	scanf("%f",&y);
	printf("\n Digite a nota 1: ");
	scanf("%f",&z);

	if (x > y){pos = y; y = x; x = pos;}
	if (x > z){pos = z; z = x; x = pos;}
	if (y > z){pos = z; z = y; y = pos;}

	printf("\n A nota mais alta é %f",z);
	printf("\n A nota do meio é %f",y);
	printf("\n A nota mais baixa é %f",x);

	float media = ((z * 4) + (y * 3) + (x * 3)) / (4 + 3 + 3);

	if (media >= 5)
    {
		printf("\n O aluno de código %d ficou com a média %f e foi APROVADO.",codigo,media);
		printf("\n Suas notas foram %f : %f : %f",x,y,z);
	} 
    else 
    {
		printf("\n O aluno de código %d ficou com a média %f e foi REPROVADO.",codigo,media);
		printf("\n Suas notas foram %f : %f : %f",x,y,z);
	}
}
