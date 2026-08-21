#include <stdio.h>

int calculaPolinomio(int x) {
    return (x * x * x) + (x * x) - 8;
}

int main(void) {
    int val = 0;
    int resultado = 0;
    
    printf("Digite o argumento do polinomio x^3 + x^2 - 8: \n");
    scanf("%d", &val);

    resultado = calculaPolinomio(val);

    printf("O valor do polinomio x^3 + x^2 - 8 avaliado no argumento dado (%d) eh igual a %d", val, resultado);

    return 0;
}