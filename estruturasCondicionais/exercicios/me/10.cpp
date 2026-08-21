#include <stdio.h>

void trocar(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void ordenar(int *a, int *b, int *c) {
    if (*a > *b) {
        trocar(a, b);
    }
    if (*b > *c) {
        trocar(a, c);
    }
    if (*a > *b) {
        trocar(a, b);
    }
}

int main(void) {
    int a, b, c;

    printf ("digite o valor de a, b, c: \n");
    scanf("%d %d %d", &a, &b, &c);

    printf("antes: %d %d %d:\n", a, b, c);

    ordenar(&a, &b, &c);

    printf("depois: %d %d %d:\n", a, b, c);

    return 0;
}