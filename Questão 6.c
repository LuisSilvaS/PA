#include <stdio.h>

int main() {
    int pulo[] = {10, 20, 30, 40, 50};

    // Acessando o valor do terceiro elemento usando *(pulo + 2)
    int valor_terceiro = *(pulo + 2);

    printf("Valor do terceiro elemento: %d\n", valor_terceiro);

    return 0;
}
