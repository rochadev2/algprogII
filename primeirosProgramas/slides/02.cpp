#include <stdio.h>

/**
 * @brief Realiza a soma de dois números inteiros pré-definidos
 *        e exibe o resultado formatado no console.
 */
int main(void) {
    const int num1 = 25;
    const int num2 = 30;
    
    int soma = num1 + num2;

    printf("A soma de %d e %d eh %d\n", num1, num2, soma);

    return 0;
}