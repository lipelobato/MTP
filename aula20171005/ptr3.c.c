#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <conio.h>
int main () {
    int i=0, vetor[] = {0x0F,0xFF,0xFFFF,0xFFFFFF,0x80000001,0xFFFFFFFF}, count=0;
    unsigned char * p;
    p = (unsigned char *) &vetor;
    for(;i < sizeof(vetor); i++)
    {

        if(p[i]!=0x0 )
            count++;
}
printf("Tem %d enderecos que armazenaram 1's", count);
getch();
return 0;
}
