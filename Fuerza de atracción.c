#include<stdio.h>
#include<conio.h>
int main() {
  float masa;
  float w;
  float g=9.8;
    printf("Favor de indicar el peso en kg: \n");
    scanf("%f", &masa);
    w=masa*g;
    printf("La fuerza de atracción es: %f\n", w);
  getch();
  return 0;
}