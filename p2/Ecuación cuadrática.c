#include <stdio.h>
#include <math.h>
int main()
{
    int A,B,C,D;
    float x,y;
    printf("Favor de ingresar el coeficiente a: ");
    scanf("%d",&A);
    while (A == 0) {
        printf("Favor de ingresar el coeficiente a: ");
        scanf("%d",&A);
    }
    printf("Favor de ingresar el coeficiente b: ");
    scanf("%d",&B);
    printf("Favor de ingresar el coeficiente c: ");
    scanf("%d",&C);
    D = B*B-4*A*C;
    if (D > 0) {
        x = (-B+sqrt(D))/(2*A);
        y = (-B-sqrt(D))/(2*A);
        printf("x1 = %.2f\n",x);
        printf("x2 = %.2f\n",y);
    }
    else if (D == 0) {
        x = (-B)/(2*A);
        printf("x1 = %.2f\n",x);
    }
    else
        printf("No tiene solucion la ecuación");
        return 0;
}

