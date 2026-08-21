#include <stdio.h>

int main(void) {
    int a, b, c, op;

    printf("Digite o valor de a, b, c: \n");
    scanf("%d %d %d", &a, &b, &c);

    op = a * b + c;

    printf("a * b + c = %d", op);

    return 0;
}