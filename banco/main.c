#include <stdio.h>

int main(void) {
  // conta corrente (codigo, saldo)

struct conta {

    int codigo;

    double saldo;

};

 

typedef struct conta Conta;

 

 

void imprimeConta(Conta* );

void deposito (Conta* , double ) ;

void saque (Conta* , double ) ;

Conta* criaConta(int , double );

 

//2. Concluam a implementação de banco com as seguintes funções:

 

typedef struct banco {

    Conta* contas[N];

    int pos; // usado para saber a quantidade de elementos

} Banco;

 

Banco* criaBanco () ;

void adicionaConta (Banco* b, Conta* c) ;

 

Conta* buscaConta(Banco* b, int codigo) ;

 

int quantidadeConta(Banco* b) ;

 

void imprimeContas (Banco* b) ;

 

//3. Por fim, garanta que o seguinte código cliente (a main) execute com os tipos criados:

 

int main () {

     printf ("%ld\n", sizeof(Banco));

      

     Banco *b = criaBanco();        

     adicionaConta(b,criaConta(123,200));

     adicionaConta(b,criaConta(456,800));

     imprimeContas(b);

     

     Conta* c1 = buscaConta(b,123);

     deposito(c1, 500);

     imprimeConta(c1);

 

     Conta* c2 = buscaConta(b,123);

     deposito(c2, 500);

     imprimeConta(c2);

 

     imprimeContas(b);

     return 0;

}
  return 0;
}