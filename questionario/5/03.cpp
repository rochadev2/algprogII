#include <stdio.h>

// Função recursiva com a interface exigida
int potencia(int x, int n) {
    // Caso base: 1 se n = 0
    if (n == 0) {
        return 1;
    }
    
    // Passo recursivo para expoentes pares: (x^(n/2))^2
    if (n % 2 == 0) {
        // Armazena o cálculo intermediário para evitar chamadas recursivas duplicadas
        int subproblema = potencia(x, n / 2);
        return subproblema * subproblema;
    } 
    // Passo recursivo para expoentes ímpares: x * x^(n-1)
    else {
        return x * potencia(x, n - 1);
    }
}

int main() {
    int x, n;
    
    // Leitura da base e do expoente (garante que 2 valores foram capturados)
    if (scanf("%d %d", &x, &n) == 2) {
        // Calcula e imprime o resultado
        printf("%d\n", potencia(x, n));
    }
    
    return 0;
}