#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define N 256
void imprimeinvertido(char *frase )
{
    if(*frase != '\0')
        imprimeinvertido(frase + 1);
    printf("%c", *frase);
}
int main () {
    char frase [N];
    printf("entre com uma frase: ");
    fgets(frase, N, stdin);
    imprimeinvertido(frase);
getche();
return 0;
}
