#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// Gabriel Augusto de Souza Morais
// 3. Foi feita uma pesquisa com um grupo de alunos de uma universidade onde se
// perguntou, para cada aluno, o número de vezes que utilizou o restaurante
// universitário no último mês. Construa um programa em C que determine:
// a. O percentual de alunos que utilizaram o restaurante menos de 10x;
// b. O percentual de alunos que utilizaram o restaurante entre 10x e 15x;
// c. O percentual de alunos que utilizaram o restaurante acima de 15x;
	
int main(void)
{ 
    setlocale(LC_ALL, "Portuguese");

	int quant_mes, cont_alunos=0;
	int c_a10=0,c_a1015=0,c_a15=0;
	int cont=5,p_a10,p_a1015,p_a15;

	while(cont>0)
    {
	    cont--;
        printf("\n Informe quantas vezes o aluno utilizou o restaurante:");
        scanf("%d",&quant_mes);
        cont_alunos++;
	
        if (quant_mes < 10)
        {
            c_a10++;
        } 

        if (quant_mes >= 10 && quant_mes <= 15)
        {
            c_a1015++;
        }

        if (quant_mes > 15)
        {
            c_a15++;
        }
	}	
    
	printf("\n %d Aluno(s) utilizaram o restaurante menos de 10 vezes no mês. \n Correspondendo a %d por cento do total de alunos pesquisados (%d)",c_a10,p_a10=(c_a10/cont_alunos)*100,cont_alunos);
	printf("\n %d Aluno(s) utilizaram o restaurante entre 10 a 15 vezes no mês. \n Correspondendo a %d por cento do total de alunos pesquisados (%d)",c_a1015,p_a1015=(c_a1015/cont_alunos)*100,cont_alunos);
	printf("\n %d Aluno(s) utilizaram o restaurante acima de 15 vezes no mês. \n Correspondendo a %d por cento do total de alunos pesquisados (%d)",c_a15,p_a15=(c_a15/cont_alunos)*100,cont_alunos);	
}
