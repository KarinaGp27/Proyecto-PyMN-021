#include <stdio.h>
int main(){
	int numero, bin[500];
    int i = 0;
    printf("Ingresa un numero decimal: ");
    scanf("%d",&numero);
	while (numero != 0)
    {
          bin[i] = numero % 2; 
          numero = numero / 2;
          i++;
    }
    i--;
    printf("Secuencia Binaria:\n ");   
    while (i>=0)
    {
          printf("%i",bin[i]);
          i--;
    }
    
	return 0;
}
