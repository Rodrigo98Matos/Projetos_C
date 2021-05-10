/*Escreva uma função que dado dois números retorne o maior.*/
int main(void) {
  int a, b;
  printf ("Digite um número:\t");
  scanf ("%d", &a);
  printf ("Digite outro número:\t");
  scanf ("%d", &b);
  if (a > b){
    printf ("%d é maior", a);
  }else{
    if ( b > a){
    printf ("%d é maior", b);
    }else{
      printf ("%d e %d são iguais", a, b);
    }
  }
  return 0;
}