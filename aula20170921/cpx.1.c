#include <stdio.h>
#include<stdlib.h>
#include<complex.h>
#include<conio.h>
int main(){
    double complex a, b, Z;
    double ra, rb, ia, ib;
printf("entre com a real a: ");
scanf("%lf", &ra);
printf("entre com a imag a: ");
scanf("%lf", &ia);
printf("entre com a real b: ");
scanf("%lf", &rb);
printf("entre com a imag b: ");
scanf("%lf", &ib);
a= ra + I*ia;
b= rb + I*ib;
Z=a+b;
printf("a soma eh %lf+I*%lf\n", creal(Z), cimag(Z));
printf("ou igual a %lf<%lf rad\n",cabs(Z), carg(Z));
getche();
    return 0;
}
