#include <stdio.h>
#include <stdbool.h>

// Função que recebe um inteiro positivo e verifica se é um número perfeito
bool num_perf(int n) {
    // Números menores ou iguais a 1 não possuem divisores próprios válidos para a soma
    if (n <= 1) {
        return false;
    }
    
    int soma_divisores = 0;
    
    // Matematicamente, o maior divisor próprio de um número não ultrapassa a sua metade
    for (int i = 1; i <= n / 2; i++) {
        // Se a divisão for exata (resto 0), o 'i' é um divisor próprio
        if (n % i == 0) {
            soma_divisores += i;
        }
    }
    
    // Retorna True se a soma dos divisores for igual ao número original
    if (soma_divisores == n) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int numero;
    
    // Leitura do número inteiro positivo
    printf("Digite um numero inteiro positivo: ");
    if (scanf("%d", &numero) == 1 && numero > 0) {
        
        // Aciona a função e imprime o resultado
        if (num_perf(numero)) {
            printf("True\n");
        } else {
            printf("False\n");
        }
    } else {
        printf("Entrada invalida. O numero deve ser positivo.\n");
    }
    
    return 0;
}