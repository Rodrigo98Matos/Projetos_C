#include <stdio.h>
/*Escreva uma função que retorne o fatorial de um dado numero.*/
int main(void) {
  int f = 1, i, a;
  printf("Digite um número:\t");
  scanf("%d",&a);
  for (i = 1; i <= (a);i++){
    f*=i;
    printf("%d\t", f);
  }
  printf("\nO fatorial de %d é %d", a, f);
  return 0;
}