#include <stdio.h>
/*Escreva uma função que retorne o produto dos números primos de 1 a N.*/
int main(void) {
  int a, n, c, i, x, p=1;
  printf ("Digite um número inteiro:\t");
  scanf ("%d", &n);
 for (i=1;i<=n;i++){
   a=0;
   for (c=1;c<=i;c++){
     if (i%c==0){
       a++;
     }}if (a==2){
       p*=i;
       printf("\n%d é primo",i);     
   }
 }printf("\nO prduto dos números primos entre 1 e %d é %d", n, p);
  return 0;
}