#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

int main () 
{
    int i;
    unsigned int x = 0xFACA8421;
    unsigned char *p;
    printf("variavel de ponteiro: %X\n", x);
    printf("endereco do ponteiro: %p; | conteudo: %u\n", &x, x);
    p =  (unsigned char *) &x;
    for(i=0; i < sizeof(x); i++)
        printf("em: %p | contem: %u ou %X\n", p+i, p[i], p[i]);
	getch();
	return 0;
}