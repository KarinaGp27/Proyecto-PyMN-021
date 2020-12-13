#include<stdio.h>
#include<conio.h>
int main() {
  float IMC;
  float peso;
  float estatura;
  char nombre [20];
  printf("Introduzca su nombre (20 letras máximo):\n");
  scanf("%s",nombre);
  printf("Indicar su estatura en metros:\n");
  scanf("%f", &estatura);
  printf("Indicar su peso en kg:\n");
  scanf("%f", &peso);
  IMC = peso / (estatura*estatura);
  printf("Cuenta con un IMC de %f\n", IMC);
  getch();
  return 0;
}
