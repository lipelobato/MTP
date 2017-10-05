#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <conio.h>
int main () 
{
	int i=0, vetor[] = {0,1,2,4,8,16,1025}, count=0;
    char * p;
    p = (char *) &vetor;
    for(;i < sizeof(vetor); i++)
    {

        printf("O conteudo em bytes eh: %u\n", p[i]);
        if(p[i]==0x00)
            count++;
}
printf("Tem %d enderecos que armazenaram 0's", count);
getche();
return 0;
}