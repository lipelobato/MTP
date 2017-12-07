#include <conio.h>
#include <stdio.h>
#include <math.h>

int main()
{
    double b, n, logaritmo;
    printf("entre com a base do log: ");
    scanf("%lf", &b);
    printf("entre com o numero: ");
    scanf("%lf", &n);
    logaritmo= (log10(n)/log10(b));
    printf("o logaritmo eh igual a: %lf\n", logaritmo);
    getche();
    return 0;
}
