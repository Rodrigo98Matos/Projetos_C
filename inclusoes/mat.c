#include "mat.h"

int maior2 (int a, int b){
  if (a > b)
    return a;
  else
    return b;
}

int maior3 (int a, int b, int c){
  return maior2 (maior2 (a, b), c);
}
int media2 (int a, int b){
  return (a+b)/2;
}