#include <stdio.h>

void trocar(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void ordenar_tres(int *a, int *b, int *c) {
    if (*a > *b) trocar(a, b); // Garante que a <= b
    if (*b > *c) trocar(b, c); // Garante que c recebe o maior dos três
    if (*a > *b) trocar(a, b); // Reordena a e b caso o valor vindo de c seja menor que a
}

int main(void) {
    int a = 25;
    int b = 3;
    int c = 12;

    printf("Antes:  %d, %d, %d\n", a, b, c);

    ordenar_tres(&a, &b, &c);

    printf("Depois: %d, %d, %d\n", a, b, c);

    return 0;
}