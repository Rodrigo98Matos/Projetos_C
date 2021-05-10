#include <stdio.h>
/*Escreva uma função que dado um numero retorne o dobro deste numero*/
int main(void) {
  float a;
  printf ("Digite um numero:\t");
  scanf ("%f", &a);
  printf ("O dobro de %f é %f", a, 2*a);
  return 0;
}