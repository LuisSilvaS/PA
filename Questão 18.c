#include <stdio.h>

// Função para multiplicação de matrizes
void multiplica_matrizes(int **A, int **B, int **C, int linhas_A, int colunas_A, int colunas_B) {
    for (int i = 0; i < linhas_A; i++) {
        for (int j = 0; j < colunas_B; j++) {
            C[i][j] = 0; // Inicializa o valor em C[i][j] como zero

            for (int k = 0; k < colunas_A; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int linhas_A, colunas_A, colunas_B;

    // Solicita ao usuário as dimensões das matrizes
    printf("Digite o número de linhas e colunas da matriz A: ");
    scanf("%d %d", &linhas_A, &colunas_A);

    printf("Digite o número de colunas da matriz B: ");
    scanf("%d", &colunas_B);

    // Aloca dinamicamente as matrizes A, B e C
    int **A, **B, **C;

    A = (int **)malloc(linhas_A * sizeof(int *));
    B = (int **)malloc(colunas_A * sizeof(int *));
    C = (int **)malloc(linhas_A * sizeof(int *));

    for (int i = 0; i < linhas_A; i++) {
        A[i] = (int *)malloc(colunas_A * sizeof(int));
        C[i] = (int *)malloc(colunas_B * sizeof(int));
    }

    for (int i = 0; i < colunas_A; i++) {
        B[i] = (int *)malloc(colunas_B * sizeof(int));
    }

    // Solicita ao usuário os elementos das matrizes A e B
    printf("Digite os elementos da matriz A:\n");
    for (int i = 0; i < linhas_A; i++) {
        for (int j = 0; j < colunas_A; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Digite os elementos da matriz B:\n");
    for (int i = 0; i < colunas_A; i++) {
        for (int j = 0; j < colunas_B; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Realiza a multiplicação das matrizes e armazena o resultado em C
    multiplica_matrizes(A, B, C, linhas_A, colunas_A, colunas_B);

    // Exibe as matrizes A, B e C
    printf("Matriz A:\n");
    for (int i = 0; i < linhas_A; i++) {
        for (int j = 0; j < colunas_A; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("Matriz B:\n");
    for (int i = 0; i < colunas_A; i++) {
        for (int j = 0; j < colunas_B; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    printf("Matriz C (Resultado da multiplicação AxB):\n");
    for (int i = 0; i < linhas_A; i++) {
        for (int j = 0; j < colunas_B; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    // Libera a memória alocada
    for (int i = 0; i < linhas_A; i++) {
        free(A[i]);
        free(C[i]);
    }

    for (int i = 0; i < colunas_A; i++) {
        free(B[i]);
    }

    free(A);
    free(B);
    free(C);

    return 0;
}
