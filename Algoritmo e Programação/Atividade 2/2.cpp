#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>

int main(void)
{ 
	int r;
	float pi = 3.1415;
	setlocale(LC_ALL, "Portuguese");
		printf("Informe o raio: \n");
		scanf("%d", &r);
	float volume = ( 4 * pi * (r*r*r) );
	printf("O volume é %f", volume);
	return 0;
}
