#include <stdio.h>

void troca (int* x, int* y){
  int t = *x;
  *x = *y;
  *y = t;
}
int main(void){
  int a = 110;
  int b = 20;
  printf ("%d\t%d\n", a, b);
  troca (&a, &b);//Troca por referencia
  printf ("%d\t%d\n", a, b);
  return 0;
}








/*int main(void) {
 
 int v[] = {5, 6, 3, 8, 8};
 for (int i = 0; i<5;i++){
   printf ("%d\n", v[i]);
 }
 
  printf("Hello World\n");
  return 0;
}*/