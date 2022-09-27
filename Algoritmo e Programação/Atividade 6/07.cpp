
void Ex7()
{
	int matriz[3][3];
	int linha,coluna;
    for (linha=0;linha<3;linha++) {
        for (coluna=0;coluna<3;coluna++) {
            matriz[linha][coluna] = rand()%5;
        }
    }
    for (linha=0;linha<3;linha++) {
        for (coluna=0;coluna<3;coluna++) {
            printf("[%d]", matriz[linha][coluna]);
        }
        printf("\n");
    }
    printf("\n Diagonal Principal:");
   	for (linha=0;linha<3;linha++) {
        for (coluna=0;coluna<3;coluna++) {
            if(linha == coluna){
            	printf("[%d]", matriz[linha][coluna]);
			}
        }
    }
    printf("\n\ Diagonal Secundária:");
    for (linha=3-1;linha>=0;linha--) {
        printf("[%d]", matriz[linha][(3-1)-linha]);
    }
}
