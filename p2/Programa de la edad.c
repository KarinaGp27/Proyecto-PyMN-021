#include<stdio.h>
int main() {
int edad;
printf("Ingresar su edad: \n");
scanf("%d", &edad);
if (edad<18) {
  printf("Es menor de edad.\n");
}
else {
  printf("Es mayor de edad.\n");
}
  return 0;
}
