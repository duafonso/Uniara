#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>

// Gabriel Augusto de Souza Morais
// 9. Calcule a média aritmética das 3 notas de um aluno e mostre, 
// além do valor da média, uma mensagem de "Aprovado", caso a média seja igual ou superior a 6, 
// ou a mensagem "reprovado", caso contrário.
	
int main(void)
{ 
    setlocale(LC_ALL, "Portuguese");

	int x, y, z;

	printf("\n Digite a nota 1: ");
	scanf("%d",&x);
	printf("\n Digite a nota 2: ");
	scanf("%d",&y);
	printf("\n Digite a nota 3: ");
	scanf("%d",&z);

	int media = (x+y+z) / 3;

	if(media >= 6) 
    { 
        printf("\n A média final é %d e o aluno está Aprovado",media);
    }
	else
    {
        printf("\n A média final é %d e o aluno está Reprovado",media);
    } 
