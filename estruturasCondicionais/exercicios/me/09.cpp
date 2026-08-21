#include <stdio.h>

void verificaNumero(float n) {
    if (n > 0) {
        printf("%.2f eh positivo.\n", n);
    } else if (n < 0) {
        printf("%.2f eh negativo.\n", n);
    } else {
        printf("o numero digitado eh igual a zero.");
    }
}

int main(void) {
    float num;

    printf("Digite o numero: \n");
    scanf("%f", &num);

    verificaNumero(num);

    return 0;
}