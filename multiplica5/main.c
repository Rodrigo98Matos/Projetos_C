#include <stdio.h>
/*Ler um número inteiro e imprimir a soma do sucessor de seu triplo com o antecessor de seu dobro.*/
int main(void) {
  int a;
  printf("Digite um número:\t");
  scanf("%d",&a);
  printf("A soma do sucessor do triplo de %d com o antecessor do seu dobro é %d", a,a *5);
  return 0;
}