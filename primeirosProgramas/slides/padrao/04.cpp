#include <stdio.h>

int main(void) {
    int num1 = 0;
    int num2 = 0;
    int produto = 0;

    printf("Informe um número: ");
    scanf("%d", &num1);

    printf("Informe outro número: ");
    scanf("%d", &num2);

    produto = num1 * num2;

    printf("O produto de %d por %d é %d\n", num1, num2, produto);

    return 0;
}