#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include <complex.h>

int main(){
    double complex, ra, ib, resultado;
    double mult_real, mult_imag, mult_imagreal1, mult_imagreal2, conj;
	printf("entre com a real a: ");
    scanf("%lf", &ra);
	printf("entre com a imag a: ");
	scanf("%lf", &ib);
	mult_real = ra*ra;
	conj= ib*(-1);
	mult_imag= ib*conj*I*I;
	mult_imagreal1= ra*ib*I;
	mult_imagreal2= ra*conj*I;
	resultado= (mult_real+mult_imag) + (mult_imagreal1 + mult_imagreal2);
	printf("a multiplicacao pelo conjugado eh%lf\n",&resultado);
	system("pause");
}
