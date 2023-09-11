#include <stdio.h>

void soma_vetores(int vet1[], int vet2[], int resultado[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        resultado[i] = vet1[i] + vet2[i];
    }
}

int main() {
    int tamanho;

    // Solicita ao usuário o tamanho dos vetores
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tamanho);

    // Declara os vetores
    int vet1[tamanho];
    int vet2[tamanho];
    int resultado[tamanho];

    // Solicita ao usuário os elementos dos vetores
    printf("Digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vet1[i]);
    }

    printf("Digite os elementos do segundo vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vet2[i]);
    }

    // Chama a função para calcular a soma e armazenar no vetor resultado
    soma_vetores(vet1, vet2, resultado, tamanho);

    // Exibe o vetor resultado
    printf("Vetor resultado da soma:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    return 0;
}
