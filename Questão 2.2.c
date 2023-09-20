#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Para a função srand()

// Função para alocar dinamicamente a matriz tridimensional
int ***alocarMatrizTridimensional(int altura, int largura, int profundidade) {
    int ***matriz;
    matriz = (int ***)malloc(altura * sizeof(int **));
    
    for (int i = 0; i < altura; i++) {
        matriz[i] = (int **)malloc(largura * sizeof(int *));
        for (int j = 0; j < largura; j++) {
            matriz[i][j] = (int *)malloc(profundidade * sizeof(int));
        }
    }
    
    return matriz;
}

// Função para liberar a memória alocada para a matriz tridimensional
void liberarMatrizTridimensional(int ***matriz, int altura, int largura) {
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            free(matriz[i][j]);
        }
        free(matriz[i]);
    }
    free(matriz);
}

int main() {
    int altura, largura, profundidade;

    // Solicita as dimensões da matriz tridimensional ao usuário
    printf("Digite a altura da matriz: ");
    scanf("%d", &altura);
    printf("Digite a largura da matriz: ");
    scanf("%d", &largura);
    printf("Digite a profundidade da matriz: ");
    scanf("%d", &profundidade);

    // Inicializa a semente para a função rand() com o tempo atual
    srand(time(NULL));

    // Aloca dinamicamente a matriz tridimensional
    int ***matriz = alocarMatrizTridimensional(altura, largura, profundidade);

    // Preenche a matriz com valores aleatórios 0 ou 1
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            for (int k = 0; k < profundidade; k++) {
                matriz[i][j][k] = rand() % 2; // Gera aleatoriamente 0 ou 1
            }
        }
    }

    // Exibe a matriz tridimensional
    printf("\nMatriz tridimensional:\n");
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            for (int k = 0; k < profundidade; k++) {
                printf("%d ", matriz[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    // Libera a memória alocada para a matriz
    liberarMatrizTridimensional(matriz, altura, largura);

    return 0;
}
