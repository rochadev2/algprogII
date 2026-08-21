#include <stdio.h>

int main(void) {
    int num, quad, cubo;

    printf("digite o valor: \n");
    scanf("%d", &num);

    quad = num * num;
    cubo = num * num * num;

    printf("%d ao quadrado = %d\n%d ao cubo = %d\n", num, quad, num, cubo);

    return 0;
}