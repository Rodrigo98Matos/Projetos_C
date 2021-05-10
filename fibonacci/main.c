#include <stdio.h>

int main(void) {
  int n, a = 1, b = 0, i;
  float d, s;
  for (i = 0; i<20; i++){
    printf("%d,\t", a);
    n = a + b;
    b = a;
    a = n;
    d = n / b;
    s = n%b;
    printf("%g.%g\n", d, s);
  }
  return 0;
}