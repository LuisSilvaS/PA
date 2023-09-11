#include <stdio.h>

int main() {
    int i = 10, j = 20;
    int *p, *q;

    // p = i; - Ilegal
    // p = &i; - Legal
    q = &j; // Legal
    p = &*&i; // Legal
    // i = (*&)j; - Ilegal
    i = *&j; // Legal
    i = *&*&j; // Legal
    q = p; // Legal
    // q = *p; - Legal, mas pode causar comportamento indefinido
    i = (*p)++ + *q; // Legal, mas pode causar comportamento indefinido

    printf("i: %d\nj: %d\n*p: %d\n*q: %d\n", i, j, *p, *q);

    return 0;
}
