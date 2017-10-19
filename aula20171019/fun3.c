#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31};
int n = sizeof(A)/sizeof(int);
int B[] = {1, 2, 3, 4, 5, 6, 8, 10, 12, 7, 29};
int m = sizeof(B)/sizeof(int);

void inter (int k,int *x) 
{
int i;
for (i=0;i<n;i++)
    if (k==A[i])
    *x=k;
}

int main ()
{
int i,x;
for (i=0;i<m;i++)
{
    x=0;
    inter (B[i],&x) ;
    if (x!=0)
    printf("%d \n",x);
}
getche();
return 0;
}