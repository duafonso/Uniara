#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// Gabriel Augusto de Souza Morais
// 6. Em uma eleição para prefeito concorrem 3 candidatos. Cada candidato é identificado
// por um número inteiro (1, 2, 3). Em uma pesquisa eleitoral, perguntou-se a cada
// entrevistado em quem ele votaria na próxima eleição para prefeito. Cada entrevistado
// deum seu voto conforme relação abaixo:
// 1, 2 ou 3 : Voto no respectivo candidato
// 5 : voto nulo
// 6 : indeciso
// 0 : voto em branco
// Faça um programa que calcule e escreva:
// a. Percentual de votos de cada candidato
// b. Percentual de eleitores indecisos
// c. Percentual de votos brancos e nulos
	
int main(void)
{ 
    setlocale(LC_ALL, "Portuguese");

	int candidato=0,candidato_1=0,candidato_2=0,candidato_3=0; 
	int v_brancos=0,v_nulos=0,v_indecisos=0,v_total=0;
	int p_c1=0,p_c2=0,p_c3=0,p_nu=0,p_in=0,p_br;
	int contador=5;

	printf("\n Digite 1 para Candidato José");
	printf("\n Digite 2 para Candidato Lucas");
	printf("\n Digite 3 para Candidato Ricardo");
	printf("\n Digite 5 para Voto Nulo");
	printf("\n Digite 6 para Indeciso");
	printf("\n Digite 0 para Voto em Branco");

	while(contador > 0)
    {
		printf("\n Informe um código:");
		scanf("%d",&candidato);
		contador--;

            switch(candidato)
            {
                case 1:
                    candidato_1++;
                    v_total += 1;
                break;
                case 2:
                    candidato_2++;
                    v_total += 1;
                break;
                case 3:
                    candidato_3++;
                    v_total += 1;
                break;
                case 5:
                    v_nulos++;
                    v_total += 1;
                break;
                case 6:
                    v_indecisos++;
                    v_total += 1;
                break;
                case 0:
                    v_brancos++;
                    v_total += 1;
                break;
                default:
                    printf("\n Opção não encontrada");
            }
	}

	printf("\n Houve %d votos no Candidato José, representando %d por cento de %d votos",candidato_1,p_c1=(candidato_1/v_total)* 100,v_total);
	printf("\n Houve %d votos no Candidato Lucas, representando %d por cento de %d votos",candidato_2,p_c2=(candidato_2/v_total)* 100,v_total);
	printf("\n Houve %d votos no Candidato Ricardo, representando %d por cento de %d votos",candidato_3,p_c3=(candidato_3/v_total)*100,v_total);
	printf("\n Houve %d votos como Nulo, representando %d por cento de %d votos",v_nulos,p_nu=(v_nulos/v_total)*100,v_total);
	printf("\n Houve %d votos como Indeciso, representando %d por cento de %d votos",v_indecisos,p_in=(v_indecisos/v_total)*100,v_total);
	printf("\n Houve %d votos como Em Branco, representando %d por cento de %d votos",v_brancos,p_br=(v_brancos/v_total)*100,v_total);
}
