#include <stdio.h>

int operacao(int a, int b) {
    return a + b - (a % b);
}

int main(void) {
    int i, j, m;

    printf("digite o valor de i e j: \n");
    scanf("%d %d", &i, &j);

    m = operacao(i, j);

    printf("%d eh a transformacao do numero inteiro [(i) = %d] no menor inteiro [(m) = %d] maior que [i = (%d)] e multiplo de um numero inteiro [(j) %d].\n", m, i, m, i, j);

    return 0;
}