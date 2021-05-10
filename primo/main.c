#include <stdio.h>
/*Escreva uma função que retorne se um dado número é primo*/
int main(void) {
  int a, x, i;
  x = 0;
  printf ("Digite um número inteiro:\t");
  scanf ("%d", &a);
  for (i = 1; i <= (a); i++){
    if (a % i == 0){x++;
    printf ("%d %d\n", i, x);
  }}if (x == 2){
  printf ("%d é primo", a);
  }else{
    printf ("%d não é primo", a);
  }
  return 0;
}