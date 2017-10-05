#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define NCHAR 16

int main(){
    int i, *p;
    char string[NCHAR];
    printf ("Digite uma frase com no maximo 16 caracteres: \n");
    fgets (string, NCHAR, stdin);
    p= (int *)string;
    for (i=0; i<sizeof(string)/4; i++)
        printf ("%d ", p[i]);
    printf ("\n");
    for (i=0; i<sizeof(string)/4; i++)
        printf ("%x ", p[i]);
	getch();
    return 0;
}