#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"


int main() {
	Matriz A, At;
	int nlin, ncol, l,c;
	printf("Entre com o numero de linhas e o numero de colunas: ");
	scanf("%d", &nlin);
	scanf("%d", &ncol);
	if(nlin==ncol)
	{
		A = criarMatriz(nlin, ncol);
		preencherMatriz(A);
		printf("\nQual e' o elemento que voce deseja retirar? De a linha e coluna que ele se encontra:");
		scanf("%d", &l);
		scanf("%d", &c);
		At = adjunta(A);
		imprimirMatriz(A);
		//At = transposta(A);
		imprimirMatriz(At);
		destruirMatriz(A);
		destruirMatriz(At);
	}
	else {
		printf("Nao foi possivel efetivar o programa, pois a matriz nao e' quadratica.");
	}
	return 0;
}
