#include <stdio.h>

int main() {
    int x[4]; // Assume-se que o endereço de x[0] seja 4092

    printf("Endereços reais calculados pelo programa:\n");

    // x declarado como char
    char *x_char = (char *)x;
    for (int i = 0; i < 4; i++) {
        printf("x_char + %d = %p\n", i, x_char + i);
    }

    // x declarado como int
    int *x_int = x;
    for (int i = 0; i < 4; i++) {
        printf("x_int + %d = %p\n", i, x_int + i);
    }

    // x declarado como float
    float *x_float = (float *)x;
    for (int i = 0; i < 4; i++) {
        printf("x_float + %d = %p\n", i, x_float + i);
    }

    // x declarado como double
    double *x_double = (double *)x;
    for (int i = 0; i < 4; i++) {
        printf("x_double + %d = %p\n", i, x_double + i);
    }

    printf("\nRespostas idealizadas:\n");
    printf("Para x declarado como char:\n");
    printf("x + 1 = 4093\n");
    printf("x + 2 = 4094\n");
    printf("x + 3 = 4095\n");

    printf("\nPara x declarado como int:\n");
    printf("x + 1 = 4096\n");
    printf("x + 2 = 4098\n");
    printf("x + 3 = 4100\n");

    printf("\nPara x declarado como float:\n");
    printf("x + 1 = 4100\n");
    printf("x + 2 = 4104\n");
    printf("x + 3 = 4108\n");

    printf("\nPara x declarado como double:\n");
    printf("x + 1 = 4108\n");
    printf("x + 2 = 4116\n");
    printf("x + 3 = 4124\n");

    return 0;
}
