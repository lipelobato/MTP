#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31};
int N = sizeof(A)/sizeof(int);

int Soma ()
{
    int i,soma=0;
    for (i=0;i<N;i++)
    soma+=A[i];
    return soma;
}
int main ()
{
int soma;
soma=Soma();
printf("Soma  :  %d\n",soma);
getche();
return 0;
}