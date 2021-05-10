#include <stdio.h>
/*1. Escreva uma função que retorne se um dado dois valores ela retorna a média aritmética.*/
int main(void) {
  float a;
  float b;
  float m;
  printf ("Digite um número:\t");
  scanf ("%f", &a);
  printf ("Digite outro número:\t");
  scanf ("%f", &b);
  m = (a + b) / 2;
  printf ("A média aritimética entre %f e %f é %f", a, b, m);
  return 0;
}