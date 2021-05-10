#include <stdio.h>
/*Faça um programa que receba vários números, até que se digite 0. Calcule e mostre:
a. A soma dos números digitados
b. A quantidade de números digitados*/
int main(void) {
  int a = 0, b = 0, n;
  while (n != 0){
    printf("Digite um número:\t");
    scanf("%d",&n);
    if (n != 0){
      a += n;
      b++;
  }}
  printf("foram digitados %d números e a soma destes números é %d", b, a);
  return 0;
}