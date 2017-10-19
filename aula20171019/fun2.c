#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void dividir(int *pa, int *pb, int *pquociente, int *presto)
{
    *pquociente = (*pa)/(*pb);
    *presto = (*pa)%(*pb);

}

int main () {
int dividendo, divisor, quociente, resto;
printf("entre com o dividendo: ");
scanf ("%d", &dividendo);
printf("entre com o divisor: ");
scanf("%d", &divisor);
dividir(&dividendo, &divisor, &quociente, &resto);
printf("resposta: %d com resto %d\n", quociente, resto);
getche();
return 0;
} 