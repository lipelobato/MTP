#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    double a, b, c, angulo;
    printf("entre com o lado B ");
    scanf("%lf", &b);
    printf ("entre com o lado C ");
    scanf ("%lf", &c);
    printf ("entre com os angulos triangulo: ");
    scanf ("%lf", &angulo);
    a = sqrt ((b*b) + (c*c)- 2*(b*c)*cos(angulo));
    printf ("%lf", a);
getche();
    return 0;

}
