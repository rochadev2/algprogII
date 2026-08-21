#include <stdio.h>

int main(void) {
    int a, b, c, soma, mult;

    printf("digite o valor de a, b, c: \n");
    scanf("%d %d %d", &a, &b, &c);

    soma = a + b + c;
    mult = a * b * c;

    printf("%d + %d + %d = %d\n%d * %d * %d = %d\n", a, b, c, soma, a, b, c, mult);

    return 0;
}