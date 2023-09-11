#include <stdio.h>

// Função de exemplo 1
int soma(int a, int b) {
    return a + b;
}

// Função de exemplo 2
int subtracao(int a, int b) {
    return a - b;
}

int main() {
    // Declarando um ponteiro para uma função que recebe dois inteiros e retorna um inteiro
    int (*funcao_ptr)(int, int);

    // Inicializando o ponteiro para apontar para a função de soma
    funcao_ptr = soma;

    // Usando o ponteiro para chamar a função de soma
    int resultado = funcao_ptr(5, 3);
    printf("Resultado da soma: %d\n", resultado);

    // Mudando o ponteiro para apontar para a função de subtração
    funcao_ptr = subtracao;

    // Usando o ponteiro para chamar a função de subtração
    resultado = funcao_ptr(5, 3);
    printf("Resultado da subtração: %d\n", resultado);

    return 0;
}
