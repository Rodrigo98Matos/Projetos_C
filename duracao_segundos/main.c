#include <stdio.h>
/*Faça um programa para ler o horário (hora, minuto e segundo) de início e a duração, em segundos, de uma experiência biológica. O programa deve informar o horário (hora, minuto e segundo) de termino da mesma.*/
int main(void) {
  int hi, mi, si, sd;
  printf("Quando começou o experimento?(hh:mm:ss)\t");
  scanf("%d:%d:%d", &hi, &mi, &si);
  printf("Qual foi o tempo de duração, em segundos?\t");
  scanf("%d", &sd);
  printf("o experimento terminou ás:\t %d:%d:%d", hi+(sd/3600), mi+(sd%3600/60), si+(sd%3600%60));
  return 0;
}