#include <stdio.h>

int main() {
    char x_char[4];
    int x_int[4];
    float x_float[4];
    double x_double[4];

    printf("Endereços para x declarado como char:\n");
    for (int i = 0; i < 4; i++) {
        printf("x_char + %d = %p\n", i, x_char + i);
    }

    printf("\nEndereços para x declarado como int:\n");
    for (int i = 0; i < 4; i++) {
        printf("x_int + %d = %p\n", i, x_int + i);
    }

    printf("\nEndereços para x declarado como float:\n");
    for (int i = 0; i < 4; i++) {
        printf("x_float + %d = %p\n", i, x_float + i);
    }

    printf("\nEndereços para x declarado como double:\n");
    for (int i = 0; i < 4; i++) {
        printf("x_double + %d = %p\n", i, x_double + i);
    }

    return 0;
}
