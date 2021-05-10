#include <stdio.h>

struct aluno {
  char nome[40];
  double notas[3];
  int matricula;
};
typedef struct aluno Aluno;


int main(void) {
  Aluno a1;
  a1.matricula =2019025643;
  Aluno a2 = {"Joaquim", {8,7,9}, 2016895};
  printf("%s - %d\n", a2.nome, a2.matricula);
  return 0;
}