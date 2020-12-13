#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, i=0;
    printf("Introduzca un digito del codigo \n");
    scanf("%d",&n1);
    i=i+1;
    printf("Introduzca un digito del codigo \n");
    scanf("%d",&n2);
    i=i+1;
    printf("Introduzca un digito del codigo \n");
    scanf("%d",&n3);
    i=i+1;
    printf("Introduzca un digito del codigo \n");
    scanf("%d",&n4);
    i=i+1;
    if(n1!=n2 && n2!=n3 && n3!=n4)
    do
   {
        printf("Codigo valido");
    } while(i<4);
    else printf("Codigo invalido");
    return 0;
}

