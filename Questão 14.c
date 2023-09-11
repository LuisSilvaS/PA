#include <stdio.h>
#include <stdlib.h>

// Função de comparação para o qsort
int comparar(const void *a, const void *b) {
    // Convertemos os ponteiros genéricos de volta para floats
    float float_a = *((float *)a);
    float float_b = *((float *)b);

    // Comparamos os floats e retornamos:
    // -1 se float_a for menor que float_b,
    // 0 se forem iguais, e
    // 1 se float_a for maior que float_b.
    if (float_a < float_b) return -1;
    else if (float_a > float_b) return 1;
    else return 0;
}

int main() {
    int n;

    // Solicita ao usuário o número de valores a serem lidos
    printf("Digite o número de valores a serem lidos: ");
    scanf("%d", &n);

    // Aloca dinamicamente um array de floats com tamanho n
    float *valores = (float *)malloc(n * sizeof(float));

    if (valores == NULL) {
        printf("Erro na alocação de memória!\n");
        return 1; // Saída de erro
    }

    // Lê os valores do usuário e os armazena no array
    printf("Digite os %d valores:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &valores[i]);
    }

    // Usa a função qsort para ordenar o array em ordem crescente
    qsort(valores, n, sizeof(float), comparar);

    // Exibe os valores ordenados
    printf("Valores em ordem crescente:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", valores[i]);
    }
    printf("\n");

    // Libera a memória alocada
    free(valores);

    return 0;
}
