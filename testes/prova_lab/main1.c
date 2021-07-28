#include <stdio.h>

/*Fazer um programa em C que leia o preço de um produto e inflacionar esse preço em 20% se ele for menor que 100 e em 35% se ele for maior ou igual a 100.*/

int main(void){
    float preco;
    printf("Preço do produto:\t");
    scanf("%f", &preco);
    if (preco < 100){
        preco *= 1.2;
    };
    if (preco >= 100){
        preco *= 1.35;
    };
    printf("\nO preço final será:\t%.2f", preco);
    return 0;
};