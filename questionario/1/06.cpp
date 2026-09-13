#include <stdio.h>

int main() {
    int inicio, fim;
    long long soma = 0;

    // Leitura dos dois números inteiros limitantes do intervalo
    if (scanf("%d %d", &inicio, &fim) == 2) {
        
        // Percorre todos os números do início até o fim (intervalo fechado)
        for (int i = inicio; i <= fim; i++) {
            
            // Verifica se o número é ímpar. 
            // O uso de '!= 0' é essencial para capturar ímpares negativos corretamente, 
            // já que em C o resultado de -3 % 2 é -1, e não 1.
            if (i % 2 != 0) {
                soma += i;
            }
        }

        // Imprime a soma total calculada
        printf("%lld\n", soma);
    }

    return 0;
}