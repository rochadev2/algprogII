#include <stdio.h>

// Função recursiva com o protótipo exigido
int conta(int n, int W[], int k) {
    // Condição de parada (caso base): o vetor foi todo percorrido
    if (n == 0) {
        return 0;
    }
    
    // Verifica se o último elemento do escopo atual é igual a k
    // O índice correspondente ao tamanho n é n - 1
    if (W[n - 1] == k) {
        return 1 + conta(n - 1, W, k); // Acumula 1 e repassa o vetor reduzido
    } else {
        return conta(n - 1, W, k);     // Repassa o vetor reduzido sem somar
    }
}

int main() {
    int n, k;
    
    // Leitura do tamanho do vetor, garantindo a restrição (N <= 20)
    if (scanf("%d", &n) == 1 && n <= 20) {
        int W[20];
        
        // Leitura sequencial do vetor W
        for (int i = 0; i < n; i++) {
            scanf("%d", &W[i]);
        }
        
        // Leitura do valor de k
        if (scanf("%d", &k) == 1) {
            // Aciona a função recursiva repassando os argumentos
            // Imprime o número de vezes que k aparece
            printf("%d\n", conta(n, W, k));
        }
    }
    
    return 0;
}