#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    float plx, ply, p2x, p2y;
    float distancia;
printf("entre com a coordenada x de p1: ");
scanf("%f",&plx);
printf("entre com a coordengada y de p1: ");
scanf("%f",&ply);
printf("entre com a coordenada x de p2: ");
scanf("%f",&p2x);
printf("entre com a coordengada y de p2: ");
scanf("%f",&p2y);
distancia=sqrt(pow(p2x-plx,2)+pow(p2y-ply,2));
printf("a distancia eh: %f\n", distancia);
system("pause");
}
