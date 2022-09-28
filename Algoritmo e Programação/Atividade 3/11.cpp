#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>

// Gabriel Augusto de Souza Morais
// 11. Elabore um algoritmo que dada a idade de um nadador classifica-o em uma das seguintes categorias:
// a.infantil A = 5 - 7 anos
// b.infantil B = 8-10 anos
// c.juvenil A = 11-13 anos
// d.juvenil B = 14-17 anos
// e.adulto = maiores de 18 anos
	
int main(void)
{ 
    setlocale(LC_ALL, "Portuguese");

	int idade;
	printf("\n Digite a idade do nadador: ");
	scanf("%d",&idade);

	if(idade >= 5 && idade <= 7)
    { 
        printf("\n A categoria do nadador é Infantil A");
    }
	if(idade >= 8 && idade <= 10)
    { 
        printf("\n A categoria do nadador é Infantil B");
    }
	if(idade >= 11 && idade <= 13)
    { 
        printf("\n A categoria do nadador é Juvenil A");
    }
	if(idade >= 14 && idade <= 17)
    {
        printf("\n A categoria do nadador é Juvenil B");
    }
	if(idade >= 18)
    { 
        printf("\n A categoria do nadador é Adulto");
    }
}
