#include <stdio.h>
/*Dado n, calcular a soma dos n primeiros números inteiros positivos*/
int main(void) {
  int n, i, s = 0;
  printf("Digite um número:\t");
  scanf("%d", &n);
  for (i =1; i<= n; i++){
    s += i;
  }
  printf("A soma dos números entre 1 e %d é %d", n, s);
  return 0;
}