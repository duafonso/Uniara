void Ex3()
{
	int matriz_1[3][3];
	int matriz_2[3][3];
	int matriz_s[3][3];
	
	int linha,coluna;
    for (linha=0;linha<3;linha++) {
        for (coluna=0;coluna<3;coluna++) {
            matriz_1[linha][coluna] = rand()%5;
            matriz_2[linha][coluna] = rand()%5;
        }
    }
	    for (linha=0;linha<3;linha++) {
	        for (coluna=0;coluna<3;coluna++) {
	            printf("[%d]", matriz_1[linha][coluna]);
	        }
	        printf("\n");
	    }
	    printf("\n");
	        for (linha=0;linha<3;linha++) {
	        for (coluna=0;coluna<3;coluna++) {
	            printf("[%d]", matriz_2[linha][coluna]);
	        }
	        printf("\n");
	    }
	printf("\n");   
	for (linha=0;linha<3;linha++) {
        for (coluna=0;coluna<3;coluna++) {
            matriz_s[linha][coluna] = (matriz_1[linha][coluna]+matriz_2[linha][coluna]);
 			printf("[%d]", matriz_s[linha][coluna]);
        }
        printf("\n");
    }
}
