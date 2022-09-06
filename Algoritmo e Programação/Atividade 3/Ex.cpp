#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>

void Ex1()
{
	//1.Escreva um programa em Linguagem C que leia um número inteiro do teclado e determine se este é positivo ou negativo.
	int num;
	printf("\n Informe um número: ");
	scanf("%d",&num);
	if(num > 0)
	{
		printf("\n O número informado é positivo");
	} else 
	printf("\n O número informado é negativo");
}
void Ex2()
{
	// 2.Uma empresa de vendas oferece para seus clientes um desconto em função do valor da compra realizada. 
	// Este desconto é de 20% se o valor da compra for maior ou igual a R$ 5.000,00 e de 15% de for menor.
 	// Faça um programa em linguagem C para exibir o valor da compra realizada, o valor do desconto e o total a ser pago pelo cliente.
	float compra, desconto, total;
	printf("\n Informe o valor da compra: ");
	scanf("%f",&compra);
	if (compra >= 5000){
		desconto = (20 * compra)/100;
 		total = compra - desconto;
 		printf("\n O valor da compra é de R$ %f",compra);
		printf("\n O valor do desconto será de R$ %f",desconto);
		printf("\n O valor a ser pago será de R$ %f",total);
	} else
		desconto = (15 * compra)/100;
 		total = compra - desconto;
 		printf("\n O valor da compra é de R$ %f",compra);
		printf("\n O valor do desconto será de R$ %f",desconto);
		printf("\n O valor a ser pago será de R$ %f",total);
}
void Ex3()
{
	// 3.Leia um número inteiro do teclado e determine se ele é par ou ímpar.
	int num;
	printf("\n Informe um número: ");
	scanf("%d",&num);
	if(num % 2 == 0)
	{
		printf("\n O número informado é par");
	} else 
	printf("\n O número informado é impar");
}
void Ex4()
{
	// 4.Um hotel cobra R$ 262,50 a diária e uma taxa de serviços conforme:
	// a.R$ 17,50 por dia se a quantidade de diárias for maior que 15;
	// b.R$ 18,75 por dia se a quantidade de diárias for igual a 15;
	// c.R$ 21,05 por dia se a quantidade de diárias for menor que 15;
	// Construa um programa em Linguagem C que mostre a quantidade de diárias, o valor de diárias, o valor da taxa de serviços e o valor total a ser pago.
	float valor_diarias = 262.50;
	float taxa, total;
	int quantidade_diarias;
	printf("\n Informe a quantidade de diárias: ");
	scanf("%d",&quantidade_diarias);
	if(quantidade_diarias > 15){
		valor_diarias = (valor_diarias) * quantidade_diarias;
		taxa = (17.50) * quantidade_diarias;
		total = valor_diarias + taxa;
	printf("\n Quantidade de diarias: %d",quantidade_diarias);
	printf("\n Valor das diarias: R$ %f",valor_diarias);
	printf("\n Valor das taxas de serviço: R$ %f",taxa);
	printf("\n Total a ser pago: R$ %f",total);
	} 
	if(quantidade_diarias == 15){
		valor_diarias = (valor_diarias) * quantidade_diarias;
		taxa = (18.75) * quantidade_diarias;
		total = valor_diarias + taxa;
		
	printf("\n Quantidade de diarias: %d",quantidade_diarias);
	printf("\n Valor das diarias: R$ %f",valor_diarias);
	printf("\n Valor das taxas de serviço: R$ %f",taxa);
	printf("\n Total a ser pago: R$ %f",total);
	} 
	if (quantidade_diarias < 15){
		valor_diarias = (valor_diarias) * quantidade_diarias;
		taxa = (21.05) * quantidade_diarias;
		total = valor_diarias + taxa;
		
	printf("\n Quantidade de diarias: %d",quantidade_diarias);
	printf("\n Valor das diarias: R$ %f",valor_diarias);
	printf("\n Valor das taxas de serviço: R$ %f",taxa);
	printf("\n Total a ser pago: R$ %f",total);
	} 
}
void Ex5()
{
	// 5.Faça um programa que leia 3 valores reais e verifique se eles permitem formar um triângulo. 
	// Caso seja possível, especificar o tipo de triângulo que será formado. 
	// Para que os valores possam representar os lados de um triângulo, 
	// é necessário que um dos lados seja menor que a soma dos outros 2 lados. 
	// Um triângulo pode ser classificado como equilátero, quando todos os lados são iguais; 
	// isósceles, quando apenas 2 lados são iguais; 
	// e escaleno, quando todos os lados são diferentes.
	float x,y,z;
	printf("\n Informe um valor para a variável x: ");
	scanf("%f",&x);
	printf("\n Informe um valor para a variável y: ");
	scanf("%f",&y);
	printf("\n Informe um valor para a variável z: ");
	scanf("%f",&z);
	if( x < (y + z) || y < (x + z) || z < (x + y)){
		if (x == y == z) {
			printf("\n Classificado como triângulo equilátero");
		}
		if ( (x == y && z != x ) || (x == z && y != x) || (y == z && x != z)) {
			printf("\n Classificado como triângulo isósceles");
		}
		if (x != y && x != z && y != z) {
			printf("\n Classificado como triângulo escaleno");
		}
	} else { printf("\n Não pode ser classificado como triângulo");}
}
void Ex6()
{
	// 6.Faça um programa em C que calcule o peso ideal de uma pessoa adulta, 
	// lendo do teclado seu peso e altura. Para cálculo do peso ideal utilize as seguintes fórmulas:
	// a.Homens  P = 72,7 * altura - 58
	// b.Mulheres  P = 62,1 * altura - 44,7
	int sexo; float altura;
	printf("\n Informe a altura da pessoa adulta: ");
	scanf("%f",&altura);
	printf("\n Digite 1 para Masculino ou 2 para Feminino: ");
	scanf("%d",&sexo);
	if(sexo == 1 ) {
		float P = 72.7 * (altura) - 58;
		printf("\n O peso ideal da pessoa adulta do sexo masculino com %f de altura é de %f kg",altura,P);
	} else {
		float P = 62.1 * (altura) - 44.7;
		printf("\n O peso ideal da pessoa adulta do sexo feminino com %f de altura é de %f kg",altura,P);
	}
}
void Ex7()
{
	// 7.Faça um programa em C que leia 3 valores inteiros e os imprima na ordem crescente.
	int x, y, z, pos;
	printf("\n Informe um valor para a variável x: ");
	scanf("%d",&x);
	printf("\n Informe um valor para a variável y: ");
	scanf("%d",&y);
	printf("\n Informe um valor para a variável z: ");
	scanf("%d",&z);
	if (x > y){pos = y; y = x; x = pos;}
	if (x > z){pos = z; z = x; x = pos;}
	if (y > z){pos = z; z = y; y = pos;}
	printf("\n Em ordem crescente fica %d %d %d",x,y,z);
}
void Ex8()
{
	// 8.Construa um programa em C que leia dois valores inteiros e determine se um é múltiplo do outro.
	int x, y;
	printf("\n Informe um valor para a variável x: ");
	scanf("%d",&x);
	printf("\n Informe um valor para a variável x: ");
	scanf("%d",&y);
	if (x % y == 0 ) { printf("\n Os valores são múltiplos um do outro");}
	else printf("\n Os valores não são múltiplos um do outro");
}
void Ex9()
{
	// 9.Calcule a média aritmética das 3 notas de um aluno e mostre, 
	// além do valor da média, uma mensagem de "Aprovado", caso a média seja igual ou superior a 6, 
	// ou a mensagem "reprovado", caso contrário.
	int x, y, z;
	printf("\n Informe a nota 1: ");
	scanf("%d",&x);
	printf("\n Informe a nota 2: ");
	scanf("%d",&y);
	printf("\n Informe a nota 3: ");
	scanf("%d",&z);
	int media = (x+y+z) / 3;
	if(media >= 6) { printf("\n A média final é %d e o aluno está Aprovado",media);}
	else printf("\n A média final é %d e o aluno está Reprovado",media);
}
void Ex10()
{
	//10.Elaborar um algoritmo que lê 2 valores a e b e os escreve com a mensagem: "São múltiplos" ou "Não são múltiplos".
	int x, y;
	printf("\n Informe um valor para a variável x: ");
	scanf("%d",&x);
	printf("\n Informe um valor para a variável x: ");
	scanf("%d",&y);
	if (x % y == 0 ) { printf("\n São múltiplos");}
	else printf("\n Não são múltiplos");
}
void Ex11()
{
	// 11.Elabore um algoritmo que dada a idade de um nadador classifica-o em uma das seguintes categorias:
	// a.infantil A = 5 - 7 anos
	// b.infantil B = 8-10 anos
	// c.juvenil A = 11-13 anos
	// d.juvenil B = 14-17 anos
	// e.adulto = maiores de 18 anos
	int idade;
	printf("\n Informe a idade do nadador: ");
	scanf("%d",&idade);
	if(idade >= 5 && idade <= 7){ printf("\n A categoria do nadador é Infantil A");}
	if(idade >= 8 && idade <= 10){ printf("\n A categoria do nadador é Infantil B");}
	if(idade >= 11 && idade <= 13){ printf("\n A categoria do nadador é Juvenil A");}
	if(idade >= 14 && idade <= 17){ printf("\n A categoria do nadador é Juvenil B");}
	if(idade >= 18){ printf("\n A categoria do nadador é Adulto");}
}
void Ex12()
{
	// 12.Escreva um algoritmo que leia 3 números inteiros e mostre o maior deles.
	int x, y, z, pos;
	printf("\n Informe um valor para a variável x: ");
	scanf("%d",&x);
	printf("\n Informe um valor para a variável y: ");
	scanf("%d",&y);
	printf("\n Informe um valor para a variável z: ");
	scanf("%d",&z);
	if (x > y){pos = y; y = x; x = pos;}
	if (x > z){pos = z; z = x; x = pos;}
	if (y > z){pos = z; z = y; y = pos;}
	printf("\n O maior núnero inteiro das variáveis é %d",z);
}
void Ex13()
{
	// 13.Escreva um algoritmo que leia o código de um aluno e suas três notas. 
	// Calcule a média ponderada do aluno, considerando que o peso para a maior nota seja 4 e para as duas restantes, 3. 
	// Mostre o código do aluno, suas três notas, 
	// a média calculada e uma mensagem "APROVADO" se a média for maior ou igual a 5 e "REPROVADO" se a média for menor que 5.
	float x, y, z;
	int codigo, pos;
	printf("\n Informe o código do aluno: ");
	scanf("%d",&codigo);
	printf("\n Informe a nota 1: ");
	scanf("%f",&x);
	printf("\n Informe a nota 1: ");
	scanf("%f",&y);
	printf("\n Informe a nota 1: ");
	scanf("%f",&z);
	if (x > y){pos = y; y = x; x = pos;}
	if (x > z){pos = z; z = x; x = pos;}
	if (y > z){pos = z; z = y; y = pos;}
	printf("\n A nota mais alta é %f",z);
	printf("\n A nota do meio é %f",y);
	printf("\n A nota mais baixa é %f",x);
	float media = ((z * 4) + (y * 3) + (x * 3)) / (4 + 3 + 3);
	if (media >= 5){
		printf("\n O aluno de código %d ficou com a média %f e foi APROVADO.",codigo,media);
		printf("\n Suas notas foram %f : %f : %f",x,y,z);
	} else {
		printf("\n O aluno de código %d ficou com a média %f e foi REPROVADO.",codigo,media);
		printf("\n Suas notas foram %f : %f : %f",x,y,z);
	}
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
		case 11:
			Ex11();
		break;
		case 12:
			Ex12();
		break;
		case 13:
			Ex13();
		break;
		
		default:
			printf("\n O número informado não corresponde a questão disponível");
	}
}
