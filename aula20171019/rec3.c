#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void dividir(int a, int b,int c,int d, int *x, int *y)
{
    *x= d*a + c*b;
    *y= b*d;
}

int mdc (int x,int y)
{
    int u,v;
    u= x;
    v= y;
	if (u==v || v==0)
		return u;
	if (u==0)
		return v;
	if ((u%2)==0 && (v%2)!=0)
	   return mdc(u/2,v);
	if ((v%2)==0 && (u%2)!=0)
	   return mdc(u, v/2);
	if ((u%2)==0 && (v%2)==0)
	   return 2*mdc(u/2, v/2);
	if (u>v)
	   return mdc((u-v)/2,v); 
	else
		return mdc((v-u)/2, u);
}
int main ()  
{
    int a,b,c,d,x,y,x1=0,y1=0;
	printf("Entre com Numerador 1 e denominador 1\n");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("Entre com Numerador 2 e denominador 2\n");
	scanf("%d",&c);
	scanf("%d",&d);
	dividir(a,b,c,d,&x,&y);
	printf("%d/%d\n", x,y);
	x1=x/mdc(x, y);
	y1=y/mdc(x, y);
	printf("Resp:  %d/%d ", x1, y1); 
	getche();
	return 0;
}
