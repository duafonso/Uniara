void Ex5()
{
	int matriz[4][4];
	int linha,coluna;
    for(linha=1;linha<=4;linha++) {
        for (coluna=1;coluna<=4;coluna++) {
            matriz[linha][coluna] = linha * coluna;
        }
    }
    for(linha=1;linha<=4;linha++) {
        for (coluna=1;coluna<=4;coluna++) {
            printf("[%d]", matriz[linha][coluna]);
        }
        printf("\n");
    }
}
