#include <stdio.h>
/*Faça um programa que dado um n, calcule a somatoria dos n elementos da seguinte sequencia*/
int main(void) {
  int n, i, s = 0;
  printf("Digite um número\t");
  scanf("%d",&n);
  for (i = 1; i <= n; i++){
    s+=i;
  }
  printf("o somatorio dos números inteiros entre 1 e %d é %d", n, s);
  return 0;
}
