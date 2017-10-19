#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
int dado()
{
    int x= (rand()%6)+1;
    return x;
}
int main(){
    int vet[5], aux=0, i, j=0;
    srand(time(NULL));
    do{
        printf("Digite ENTER para jogar o dado! ");
        getchar();
        vet[0]=dado();
        printf("%d\n", vet[0]);
        printf("Digite ENTER para jogar o dado! ");
        getchar();
        vet[1]=dado();
        printf("%d\n", vet[1]);
        printf("Digite ENTER para jogar o dado! ");
        getchar();
        vet[2]=dado();
        printf("%d\n", vet[2]);
        printf("Digite ENTER para jogar o dado! ");
        getchar();
        vet[3]=dado();
        printf("%d\n", vet[3]);
        printf("Digite ENTER para jogar o dado! ");
        getchar();
        vet[4]=dado();
        printf("%d\n", vet[4]);
        printf("Digite ENTER para jogar o dado! ");
        getchar();
        vet[5]=dado();
        printf("%d\n", vet[5]);
        for (i=0; i<5; i++)
            aux=aux+vet[i];
        printf("\nA soma e: %d", aux);
        if (aux>=18 && aux<=23){
            printf("\nVoce ganhou!!");
            break;
        }
        j++;
    }while(j<3);
    if (aux<18)
        printf("\nvoce perdeu!");
	getche();
	return 0;
}