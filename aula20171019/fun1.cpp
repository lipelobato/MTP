#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
void dividir(int *pa, int *pb, int *pa_2, int *pb_2, int *n_dividendo, int *n_divisor)
{
	*n_divisor=(*pb)*(*pb_2);
	*n_dividendo=(*n_divisor/(*pb))*(*pa) + (*n_divisor/(*pb_2))*(*pa_2);
    
 }

int main () {
int dividendo, divisor, n_dividendo, n_divisor, dividendo_2, divisor_2;
printf("entre com o dividendo: ");
scanf ("%d", &dividendo);
printf("entre com o divisor: ");
scanf("%d", &divisor);
if(divisor ==0)
{
	printf("Não é possível calcular com o divisor igual a 0");
	getche();
	return 0;
}
printf("entre com o segundo dividendo: ");
scanf("%d", &dividendo_2);
printf("entre com o segundo divisor: ");
scanf("%d", &divisor_2);
if(divisor_2==0)
{
	printf("Nao e' possivel calcular com o divisor igual a 0");
	getche();
	return 0;
}
dividir(&dividendo, &divisor, &dividendo_2, &divisor_2, &n_dividendo, &n_divisor);
printf("resposta: %d/%d\n", n_dividendo, n_divisor);
getche();
return 0;
} 