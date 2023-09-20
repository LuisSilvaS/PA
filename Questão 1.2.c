#include <stdio.h>

// Definindo o tamanho da matriz
#define ROWS 8
#define COLS 8

// Função para codificar a matriz em um inteiro de 64 bits
unsigned long long int encodeMatrix(unsigned char m[ROWS][COLS]) {
    unsigned long long int encodedValue = 0; // Variável que irá armazenar a codificação

    // Loop para percorrer a matriz
    for (int row = 0; row < ROWS; row++) {
        for (int col = 0; col < COLS; col++) {
            // Deslocamos os bits à esquerda para abrir espaço para o próximo bit
            encodedValue <<= 1;
            
            // Definimos o bit menos significativo com base no valor na matriz
            if (m[row][col] == 1) {
                encodedValue |= 1;
            }
        }
    }

    return encodedValue; // Retorna o valor codificado de 64 bits
}

int main() {
    // Matriz de exemplo com estados dos LEDs (0 para apagado e 1 para aceso)
    unsigned char m[ROWS][COLS] = {
        {1, 0, 1, 0, 1, 0, 1, 0},
        {0, 1, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {0, 1, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {0, 1, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {0, 1, 0, 1, 0, 1, 0, 1}
    };

    // Codifica a matriz em um inteiro de 64 bits
    unsigned long long int encodedValue = encodeMatrix(m);

    // Imprime o valor codificado
    printf("Valor codificado: %llu\n", encodedValue);

    return 0;
}

