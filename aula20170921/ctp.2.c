#include <conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define NCHAR 256
int main(){
int i;
char frase[NCHAR];
printf("Digite uma frase:");
fgets(frase, NCHAR, stdin);
for(i=0;frase[i];i++)
frase[i]= tolower(frase[i]);
printf("A frase em minusculas:\n%s", frase);
getche();
  return 0;
}
