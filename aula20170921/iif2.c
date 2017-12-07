#include <conio.h>
#include <stdio.h>

int main()
{
    int i, n;
    float r1=0;
    double r2=0;
    printf("entre com um numero inteiro: ");
    scanf ("%d", &n);
    for (i=0; i<729; i++)
        r1=r1+1/(float)n;
    for (i=0; i<729; i++)
        r2=r2+1/(float)n;
    printf("resultado em float: %.15g\n", r1);
    printf("resultado em double: %.15g\n", r2);
    getche();
    return 0;
}
