void Ex4()
{
	int matriz[3][3];
	int linha,coluna,soma;
	int soma_linhas[25];
	
    for (linha=0;linha<3;linha++) {
        for (coluna=0;coluna<3;coluna++) {
            matriz[linha][coluna] = rand()%2;
        }
    }
	for (linha=0;linha<3;linha++) {
	    for (coluna=0;coluna<3;coluna++) {
	        printf("| %d x %d: [%d]|",linha,coluna,matriz[linha][coluna]);
	        }
	        printf("\n");
	    }
   	for (linha=0;linha<3;linha++) {
        for (coluna=0;coluna<3;coluna++) {
            if(linha > coluna || linha == coluna){
            	soma += matriz[linha][coluna];
			      }
        } 
    }  
    printf("\n Soma dos Elementos: %d",soma);
}
