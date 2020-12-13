#include <stdio.h>

int main()
{
    int n, cont, a=0, b=1, c;
    printf ("Cuantos numeros desea imprimir: ");
    scanf("%d", &n);
    printf("0,1,");
    for(cont=0; cont<n-2; cont++){
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
    }
    printf("\n");
    return 0;

}
