#include <stdio.h>

int main(void) {
  int ano;
  printf ("Entre com ano:");
  scanf ("%d", &ano);
  if (ano % 400 == 0){
    printf ("bissexto");
  }else{if(ano % 4 == 0 && ano % 100 != 0){
    printf ("bissexto");
  }else{
    printf ("Não é bissexto");
  }}
  return 0;
}