#include <stdio.h>
//função que dado uma quanidade em segundos, retorne horas:minutos:segundo.
int main(void) {
  int t, s,m,h;
  printf("Segundos:\t");
  scanf("%d",&t);
  h = t / 3600;
  m = (t%3600)/60;
  s = (t%3600)%60;
  printf("%d segundos são equivalentes a %d:%d:%d", t, h, m, s);
  return 0;
}