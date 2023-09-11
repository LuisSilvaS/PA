#include <stdio.h>

int main() {
    int mat[4] = {1, 2, 3, 4};
    int *p, x;

    p = mat + 1;
    printf("Endereço apontado por p: %p\n", p);

    // mat++; // Isso resultaria em um erro de compilação

    // ++mat; // Isso resultaria em um erro de compilação

    // x = (*mat)++; // Isso resultaria em um erro de compilação

    return 0;
}
