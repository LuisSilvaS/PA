#include <stdio.h>
#include <stdlib.h>

// Função de comparação personalizada para inteiros
int compararInteiros(const void *a, const void *b) {
    int int_a = *((int *)a);
    int int_b = *((int *)b);

    // Comparação simples de inteiros
    if (int_a < int_b) return -1;
    else if (int_a > int_b) return 1;
    else return 0;
}

// Função de ordenação personalizada para inteiros
void ordenarInteiros(int *array, int tamanho) {
    qsort(array, tamanho, sizeof(int), compararInteiros);
}

int main() {
    int n;

    // Solicita ao usuário o número de valores a serem lidos
    printf("Digite o número de valores a serem lidos: ");
    scanf("%d", &n);

    // Aloca dinamicamente um array de inteiros com tamanho n
    int *valores = (int *)malloc(n * sizeof(int));

    if (valores == NULL) {
        printf("Erro na alocação de memória!\n");
        return 1; // Saída de erro
    }

    // Lê os valores do usuário e os armazena no array
    printf("Digite os %d valores:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &valores[i]);
    }

    // Usa a função de ordenação personalizada para ordenar o array
    ordenarInteiros(valores, n);

    // Exibe os valores ordenados
    printf("Valores em ordem crescente:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");

    // Libera a memória alocada
    free(valores);

    return 0;
}
