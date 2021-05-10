#include <stdio.h>
/*Faça uma função que dado um horário (horas, minutos e segundo), retorne quantos segundos transcorreram desde o início do dia.*/
int main(void) {
  int h, m, s, t;
printf("Hora:\t");
scanf("%d",&h);
printf("Minuto:\t");
scanf("%d", &m);
printf("Segundo:\t");
scanf("%d",&s);
t = (h*3600) + (m*60) + s;
  printf("Se passaram %d segundos, desde o início do dia", t);
  return 0;
}