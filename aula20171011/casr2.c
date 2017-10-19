#include <iostream>
#include <stdio.h>
#include <string.h>
#include <time.h>
using namespace std;
void desenho (int x, int y)
{
	char str[]= ":$#$:4b.':.:$#$:4b.':.";
	for( int i=0; i<y; i++)
	{
		for (int i=0; i < x; i++)
		{
			printf("%c", str[rand()%20]);
		}
		printf("\n\n");
	}
}
void main ()
{
	srand(time(0));
	int x, y;
	printf("Digite o numero de colunas do desenho\n");
	scanf("%d", &x);
	printf("\nDigite o numero de linhas do desenho\n");
	scanf("%d", &y);
	desenho (x, y);
	system ("pause");
}