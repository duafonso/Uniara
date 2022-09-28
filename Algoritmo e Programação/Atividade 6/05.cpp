#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>

// Gabriel Augusto de Souza Morais
// 5. Faça um programa que gere automaticamente a matriz abaixo:
// [1] [2] [3] [4]
// [2] [4] [6] [8]
// [3] [6] [9] [12]
// [4] [8] [12] [16]

int main(void)
{ 
    setlocale(LC_ALL, "Portuguese");

	int matriz[4][4];
	int linha,coluna;

    for(linha=1;linha<=4;linha++) 
    {
        for (coluna=1;coluna<=4;coluna++) 
        {
            matriz[linha][coluna] = linha * coluna;
        }
    }

    for(linha=1;linha<=4;linha++) 
    {
        for (coluna=1;coluna<=4;coluna++) 
        {
            printf("[%d]", matriz[linha][coluna]);
        }
        printf("\n");
    }
}
