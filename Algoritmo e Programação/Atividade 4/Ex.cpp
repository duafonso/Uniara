#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>
#include <math.h>
void Ex1()
{
	//	1. Construa um programa em C que para um grupo de 50 números inteiros lidos do
	//	teclado, determine:
	//	a. A soma dos números positivos
	//	b. A quantidade de números negativos
	//	c. A média dos números ímpares
	int num [5], contador;
	int soma = 0;
	int neg_qt = 0;
	int med_qt = 0;
	for(contador=1;contador<=5;contador++){
		printf("\n Digite o valor %d:",contador);
		scanf("%d",&num[contador]);
		if(num[contador] >= 1){
			soma += num[contador];
		}
		if(num[contador] < 0 ){
			neg_qt += 1;
		}
		if(num[contador] % 2 == 1){
			int imp_qt = 0, imp_sm = 0;
			imp_qt += 1;
			imp_sm += num[contador];
			med_qt = (imp_sm / imp_qt);
		}
	}
	printf("\n A soma dos números positivos é %d",soma);
	printf("\n A quantidade de números negativos é %d",neg_qt);
	printf("\n A média dos números impares é %d",med_qt);
}

void Ex2()
{
	//	2. Faça um programa em C que imprima todos os números pares compreendido entre 85
	//	e 907. O programa também deve exibir a soma destes valores.
	int numero,calc,soma_pares;
    for(numero=85;numero<=907;numero++){
        calc = numero % 2;
        if(calc == 0) {
        	soma_pares = (soma_pares+numero);
        }
    } printf("\nSoma dos pares 85 entre 907: %d",soma_pares);
}
void Ex3()
{
	//	3. Foi feita uma pesquisa com um grupo de alunos de uma universidade onde se
	//	perguntou, para cada aluno, o número de vezes que utilizou o restaurante
	//	universitário no último mês. Construa um programa em C que determine:
	//	a. O percentual de alunos que utilizaram o restaurante menos de 10x;
	//	b. O percentual de alunos que utilizaram o restaurante entre 10x e 15x;
	//	c. O percentual de alunos que utilizaram o restaurante acima de 15x;
	
	int quant_mes, cont_alunos=0;
	int c_a10=0,c_a1015=0,c_a15=0;
	
	printf("\n Informe quantas vezes o aluno utilizou o restaurante:");
	scanf("%d",&quant_mes);
	cont_alunos++;
	
	if (quant_mes < 10){
		c_a10++;
	} 
	if (quant_mes >= 10 && quant_mes <= 15){
		c_a1015++;
	}
	if (quant_mes > 15){
		c_a15++;
	}
	
	int p_a10 = (c_a10/cont_alunos) * 100;
	int p_a1015 = (c_a1015/cont_alunos)  * 100;
	int p_a15 = (c_a15/cont_alunos) * 100;
	
	printf("\n %d Aluno(s) utilizaram o restaurante menos de 10 vezes no mês. \n Correspondendo a %d por cento do total de alunos pesquisados (%d)",c_a10,p_a10,cont_alunos);
	printf("\n %d Aluno(s) utilizaram o restaurante entre 10 a 15 vezes no mês. \n Correspondendo a %d por cento do total de alunos pesquisados (%d)",c_a1015,p_a1015,cont_alunos);
	printf("\n %d Aluno(s) utilizaram o restaurante acima de 15 vezes no mês. \n Correspondendo a %d por cento do total de alunos pesquisados (%d)",c_a15,p_a15,cont_alunos);
	
}
void Ex4()
{
	//	4. Faça um programa que calcule o valor de A, dado por:
	//	Onde N é um número inteiro maior que zero
	
}
void Ex5()
{
	//	5. Construa um programa que, para a progressão geométrica 3, 9, 27, 81, ... 6561,
	//	determine a soma de seus termos. Construa um algoritmo que obrigue o computador
	//	a gerar automaticamente cada um dos termos a ser somado.
	// Sn = (a¹ * (q^N - 1)) / q - 1
	int prime_termo = 3;
	int razao_termo = 3;
	int quant_termo, contador;
    printf("\n Informe a quantidade de termos: ");
    scanf("%d",&quant_termo);
	int termo = quant_termo;
    for(contador=0;contador<=quant_termo-1;contador++)
	{
	    printf("O termo da posição %d  = %d\n",contador,termo);
	    termo=(termo*razao_termo);
    }
   	int pg=((prime_termo*(pow(razao_termo,quant_termo)-1))/(razao_termo-1));
    printf("\n A soma dos termos da Progressão Geométrica é: %d",pg);
}
void Ex6()
{
	//	6. Em uma eleição para prefeito concorrem 3 candidatos. Cada candidato é identificado
	//	por um número inteiro (1, 2, 3). Em uma pesquisa eleitoral, perguntou-se a cada
	//	entrevistado em quem ele votaria na próxima eleição para prefeito. Cada entrevistado
	//	deum seu voto conforme relação abaixo:
	//	1, 2 ou 3 : Voto no respectivo candidato
	//	5 : voto nulo
	//	6 : indeciso
	//	0 : voto em branco
	//	Faça um programa que calcule e escreva:
	//	a. Percentual de votos de cada candidato
	//	b. Percentual de eleitores indecisos
	//	c. Percentual de votos brancos e nulos
	int candidato=0,candidato_1=0,candidato_2=0,candidato_3=0; 
	int v_brancos=0,v_nulos=0,v_indecisos=0,v_total=0;
	int p_c1=0,p_c2=0,p_c3=0,p_nu=0,p_in=0,p_br;
	int contador=5;
	printf("\n 1 para Candidato José");
	printf("\n 2 para Candidato Lucas");
	printf("\n 3 para Candidato Ricardo");
	printf("\n 5 para Voto Nulo");
	printf("\n 6 para Indeciso");
	printf("\n 0 para Voto em Branco");
	while(contador > 0){
		printf("\n Informe um código:");
		scanf("%d",&candidato);
		contador--;
		switch(candidato){
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
void Ex7()
{
	//	7. Construa um programa que para um conjunto de N números reais, determine o valor
	//	máximo e o valor mínimo digitados.
	float num, max, min;
	int contador = 3;
	while(contador > 0){
	contador--;
	printf("\nDigite um valor:");
	scanf("%f",&num);
	if (num > max){
	max = num;
	min = max;
	}
	if (num < min){
	min = num;
	}	
	}
	printf("\n Máximo: %f",max);
	printf("\n Mínimo: %f",min);
	}

void Ex8()
{
	//	8. Sem utilizar a operação de multiplicação, faça um programa que multiplique 2
	//	números inteiros lidos do teclado
	int numero_1, numero_2, contador;
	int multiplicacao = 0;
	
	printf("\n Digite um valor para variável 1:");
	scanf("%d",&numero_1);
	printf("\n Digite um valor para variável 1:");
	scanf("%d",&numero_2);
	for(contador=1;contador<=numero_1;contador++)
	{
		multiplicacao += numero_2;
	}
	printf("\n Resultado da multiplicação: %d",multiplicacao);
}
void Ex9()
{
	//	9. Crie um algoritmo que o usuário entre com vários números inteiros e positivos e
	//	imprima o produto dos números ímpares e a soma dos números pares.
	int num, mult=1,som=0;
	while(num >= 0){
	printf("\nDigite um valor inteiro e positivo:");
	scanf("%d",&num);	
	if(num % 2 == 1){
	mult = mult * num;
	} 
	if(num % 2 == 0){
	som = som + num;
	}
	printf("\nProduto dos números ímpares: %d",mult);
	printf("\nSoma dos números pares: %d \n",som);
	}
}
void Ex10()
{
	//	10. Crie um algoritmo que ajude o DETRAN a saber, o total de recursos que foram
	//	arrecadados com a aplicação de multas de trânsito. O algoritmo deve ler as seguintes
	//	informações para cada motorista:
	//	a. O número da carteira de motorista (de 1 a 4327)
	//	b. Número de multas;
	//	c. Valor de cada uma das multas.
	//	Deve ser impresso o valor da dívida de cada motorista e ao final da leitura o
	//	total de recursos arrecadados (somatório de todas as multas). O algoritmo
	//	deverá imprimir também o número da carteira do motorista que obteve o
	//	maior número de multas.
	
}

int main(void)
{ 
	int opc;
	printf("\n Informe o número da questão ser iniciada: ");
	scanf("%d",&opc);
	switch(opc)
	{
		case 1:
			Ex1();
		break;
		case 2:
			Ex2();
		break;
		case 3:
			Ex3();
		break;
		case 4:
			Ex4();
		break;
		case 5:
			Ex5();
		break;
		case 6:
			Ex6();
		break;
		case 7:
			Ex7();
		break;
		case 8:
			Ex8();
		break;
		case 9:
			Ex9();
		break;
		case 10:
			Ex10();
		break;
		
		default:
			printf("\n O número informado não corresponde a questão disponível");
	}
}
