#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
#include <conio.h>
char * iniciaTexto();
void gravaTexto(char *texto, int tamanho);
char * lerTexto();
int main() {
    char *texto;
    printf("Digite seu texto (caso queira  sair, tecle *,ENTER):\n");
	scanf("%s", texto);
	char *texto = iniciaTexto();
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
    gravaTexto(texto, strlen(texto));
	free(texto);
	getche();
}
	char * iniciaTexto()
{
    char * texto = (char*) malloc(1);
    texto[0] = '\0';
    return texto;
}
void gravaTexto(char * texto, int tamanho)
{
FILE* arquivo;
int i;
arquivo= fopen("meutexto.txt", "a");
if (arquivo==NULL)
fprintf(stderr, "Erro na gravacao do arquivo");
else {
	for (i=0;i<tamanho;i++)
	fputc(texto[i],arquivo);
	fclose(arquivo);
}
}
char * lerTexto() {
    FILE * arquivo;
    char * texto = iniciaTexto();
    char * aux;
    int c, tamanho = 0;
    arquivo = fopen("meutexto.txt","r");
    if(arquivo == NULL)
        return texto;
    else {
        do {
            c = fgetc(arquivo);
            if(c != EOF) {
                aux = (char *) realloc(texto, tamanho+2);
                if(aux != NULL) {
                    texto = aux;
                    texto[tamanho] = c;
                    tamanho++;
                    texto[tamanho] = '\0';
                }
                else printf("\nErro! Sem memoria!\n");
            }
        } while(c != EOF);
        fclose(arquivo);
        return texto;
    }
}
