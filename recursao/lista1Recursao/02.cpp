#include <stdio.h>

// Função recursiva com o protótipo exigido
int soma(int N) {
    if (N == 1) {
        return 1;
    } else {
        return N + soma(N - 1);
    }
}

int main() {
    int N, resultado;

    // Leitura do número inteiro
    printf("Digite um numero inteiro N (N >= 1): ");
    
    if (scanf("%d", &N) == 1) {
        // Validação da restrição estrutural N >= 1
        if (N >= 1) {
            resultado = soma(N);
            printf("A soma e: %d\n", resultado);
        } else {
            printf("Valor invalido. N deve ser maior ou igual a 1.\n");
        }
    }

    return 0;
}