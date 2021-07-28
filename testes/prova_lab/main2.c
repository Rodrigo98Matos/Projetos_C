#include <stdio.h>

/* Fazer um programa em C que solicita o total gasto pelo cliente de uma loja, imprime as opções de pagamento, solicita a opção desejda e imprime o valor total das prestações (se holverem). 1ª Opção: a vista com 10% de desconto. 2ª Opção: em duas vezes (preço da etiqueta). 3ª Opção: de 3 até 10 vezes com 3% de juros ao mês (somente para compras a cima de R$100).*/

int main(void){
    float valor, total, vparcelas;int opcao, parcelas;
    printf("Soma total da compra:\t");
    scanf("%f", &valor);
    printf("\tOpcoes de pagamento:\n");
    printf("[1]\tA vista\n");
    printf("[2]\tParcelar em Duas Vezes\n");
    if (valor > 100){
        printf("[3]\tParcelar de 3 a 10 Vezes\n");
    };
    printf(">>>\t");
    scanf("%d", &opcao);
    if (opcao == 1){
        total = valor * 0.9;
    }else if(opcao == 2){
        total = valor;
        parcelas = 2;
        vparcelas = total/2.0;
    }else if(valor >= 100 && opcao == 3){
        printf("\nQuntidade de parcelas:\t");
        scanf("%d", &parcelas);
        total = valor*1.03;
        vparcelas = total/parcelas;
    };
    if(opcao==1){
        printf("\nValor final:\t%.2f", total);
    }else{
        printf("\nO valor final:\t%.2f\tEm %d vezes de R$%.2f!",total, parcelas, vparcelas);
    };
    return 0;
}