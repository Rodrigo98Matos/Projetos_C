#include <stdio.h>
/*Faça uma função que dado a base e a altura de um retângulo retorne a área.*/
int main(void) {
  float a, b, c;
  printf("Base:\t");
  scanf("%f",&b);
  printf("Altura:\t");
  scanf("%f",&a);
  c = a * b;
  printf("A área deste retângulo é %f", c);
  return 0;
}