#include <stdio.h>

// Função recursiva com a interface exigida
int ciclo(int n) {
    // Imprime o número atual da sequência seguido de espaço
    printf("%d ", n);
    
    // Condição de parada (caso base): o processo termina quando n = 1
    if (n == 1) {
        return 1;
    } 
    // Passo recursivo para n par: divide por 2
    else if (n % 2 == 0) {
        return 1 + ciclo(n / 2);
    } 
    // Passo recursivo para n ímpar: multiplica por 3 e soma 1
    else {
        return 1 + ciclo((n * 3) + 1);
    }
}

int main() {
    int n;
    
    // Leitura do número inicial (garantindo n >= 1)
    if (scanf("%d", &n) == 1 && n >= 1) {
        // A função ciclo imprimirá a sequência inteira na mesma linha.
        // O valor retornado por ela será o comprimento, impresso no final.
        int comprimento = ciclo(n);
        printf("%d\n", comprimento);
    }
    
    return 0;
}