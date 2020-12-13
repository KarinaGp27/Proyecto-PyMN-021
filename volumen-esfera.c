#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    float PI = 3.1416;
    float volumen;
    float r;
    printf("Indique el valor del radio:\n");
    scanf("%f", &r);
    volumen= 4/3*PI*pow(r, 3);
    printf("El volumen de la esfera es: %f \n", volumen);
  getch();
  return 0;
}