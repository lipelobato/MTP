#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<conio.h>

float med(float *numeros,int a)
{
    int i;
    float m=0.0f;
    for (i=0;i<a;i++)
        m+=numeros[i];
    m/=a;
    return m;
}
float desv(float * numeros,int a)
{
    float m= med(numeros,a);
    float desvp=0.0f;
    int i;
    for (i=0;i<a;i++)
            desvp+=pow(numeros[i]-m,2);
    desvp/=(a-1);
    return sqrt(desvp);
}
int main()
{
    float * num;
    int a, i=0;
    printf("Quantos numeros voce quer?: ");
    scanf("%d",&a);
    num=(float*)malloc(a*sizeof(float));
    for (i=0;i<a;i++)
    {
        printf("Insira %do numero: ",i+1);
        scanf("%f",num+i);
    }
    printf("\nMedia: %f",med(num,a));
    printf("\nDesvio padrao:%f\n",desv(num,a));
    free(num);
	getche();
	return 0;
}
