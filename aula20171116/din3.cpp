#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
#include <conio.h>
char * iniciaTexto();
int main() {
    char *texto;
    printf("Digite seu texto (caso queira  sair, tecle *,ENTER):\n");
	scanf("%s", texto);
	char * texto = iniciaTexto();
	int i=0;
    while(true){
		texto = (char *) realloc(texto, strlen(texto)+1);
        texto[i] = getchar();
		texto[i]= toupper(texto[i]);
		i++;
        if(texto[i] == '*') {
            return 0;
			break;
		}
}
		printf("\n Na memoria: \n");
    printf("%s\n", texto);
    printf("\nTamanho da string: %d\n", strlen(texto));
    free(texto);
	getche();
}
	char * iniciaTexto()
{
    char * texto = (char*) malloc(1);
    texto[0] = '\0';
    return texto;
}
    