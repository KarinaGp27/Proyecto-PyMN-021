#include <stdio.h>
#include <conio.h>
int numero;
int main() {
  printf("Favor de ingresar un numero entero y positivo\n");
  scanf("%d",&numero);
    if (numero%2==0) {
    printf("El número ingresado es par\n");
  }
  else {
      printf("El número ingresado es impar\n");
  }
  getch();
  return 0;
}