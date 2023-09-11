#include <stdio.h>

int main() {
    // Declaração e inicialização das variáveis inteiras i e j
    int i = 3, j = 5;
    
    // Declaração de ponteiros p e q
    int *p, *q;
    
    // Atribuição dos endereços das variáveis i e j aos ponteiros p e q, respectivamente
    p = &i;
    q = &j;
    
    // Impressão do valor apontado pelo ponteiro p (valor de i)
    printf("Valor de *p: %d\n", *p);
    
    // Impressão do valor apontado pelo ponteiro q (valor de j)
    printf("Valor de *q: %d\n", *q);
    
    // Impressão da soma dos valores apontados por p e q (valores de i e j)
    printf("Valor de *p + *q: %d\n", *p + *q);

        // Expressão 1: p == &i
    printf("Resultado da expressao 1: %d\n", p == &i);
    
    // Expressão 2: *p - *q
    printf("Resultado da expressao 2: %d\n", *p - *q);
    
    // Expressão 3: **&p
    printf("Resultado da expressao 3: %d\n", **&p);
    
    // Expressão 4: 3 - *p/(*q) + 7
    printf("Resultado da expressao 4: %d\n", 3 - *p / (*q) + 7);
    
    return 0;
}
