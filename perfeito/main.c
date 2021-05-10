#include <stdio.h>
/*Faça uma função que retorne se um dado número inteiro é perfeito.*/
int main(void) {
  int n,i, s=0;
printf("Digite um número:\t");
scanf("%d",&n);
for (i=1;i<n;i++){
  if(n%i==0){
    printf("%d é divisível por %d\n", n, i);
    s+=i;
  }
}if(s==n){
  printf("A soma dos números divisores de %d é %d, logo %d é um número perfeito", n, s, n);
}else{
  printf("A soma dos números divisores de %d é %d, logo %d não é um número perfeito", n, s, n);
}
  return 0;
}