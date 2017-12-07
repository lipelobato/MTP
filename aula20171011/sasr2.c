#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
void par(int n){
    int i;
    printf ("\nNumeros pares: ");
    for (i=1; i<=n; i++)
        if (i%2==0)
        printf ("%d ", i);
}

void impar(int n){
    int i;
    printf ("\nNumeros impares: ");
    for (i=1; i<=n; i++)
        if (i%2!=0)
        printf ("%d ", i);
}

int main() {
    int n=20;
	int op;
	printf ("\n Digite 1 para ver os pares e 2 para ver os impares:");
	scanf ("%d", &op);
	switch(op)
	{
		case 1: 
	{
		impar(n);
		break;
	}
		case 2:
			{
				par(n);
				break;
			}

	}
	getche();
    return 0;
}
