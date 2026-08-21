#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * @brief Calcula a soma entre dois números inteiros.
 * 
 * @param a Primeiro operando.
 * @param b Segundo operando.
 * @return int Resultado da soma aritmética.
 */
int somar(const int a, const int b) {
    return a + b;
}

/**
 * @brief Solicita e lê um número inteiro da entrada padrão com validação.
 * 
 * @param prompt Mensagem exibida para o usuário.
 * @param saida Ponteiro para a variável onde o valor lido será armazenado.
 * @return true se a leitura foi bem-sucedida, false em caso de erro/entrada inválida.
 */
bool ler_inteiro(const char *prompt, int *saida) {
    if (prompt == NULL || saida == NULL) {
        return false;
    }

    printf("%s", prompt);
    if (scanf("%d", saida) != 1) {
        return false;
    }

    return true;
}

int main(void) {
    int num1 = 0;
    int num2 = 0;

    if (!ler_inteiro("Informe o primeiro número: ", &num1)) {
        fprintf(stderr, "Erro: Entrada inválida. Digite um número inteiro válido.\n");
        return EXIT_FAILURE;
    }

    if (!ler_inteiro("Informe o segundo número: ", &num2)) {
        fprintf(stderr, "Erro: Entrada inválida. Digite um número inteiro válido.\n");
        return EXIT_FAILURE;
    }

    const int soma = somar(num1, num2);

    printf("A soma de %d mais %d é %d\n", num1, num2, soma);

    return EXIT_SUCCESS;
}