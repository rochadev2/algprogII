#include <stdio.h>

// Função recursiva para calcular o piso do logaritmo na base 2
int piso_log2(int n) {
    // Condição de parada (caso base): o quociente da divisão chegou a 1
    if (n <= 1) {
        return 0;
    } 
    // Passo recursivo: soma 1 à contagem e repassa a metade do valor
    else {
        return 1 + piso_log2(n / 2);
    }
}

int main() {
    int n;
    
    // Exemplo de leitura e teste
    if (scanf("%d", &n) == 1 && n > 0) {
        printf("%d\n", piso_log2(n));
    }
    
    return 0;
}