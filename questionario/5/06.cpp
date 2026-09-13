#include <stdio.h>

// Função recursiva de Ackermann seguindo a especificação
long long ackermann(long long m, long long n) {
    // Caso base: se m = 0, retorna n + 1
    if (m == 0) {
        return n + 1;
    }
    // Segundo caso: se m > 0 e n = 0
    else if (m > 0 && n == 0) {
        return ackermann(m - 1, 1);
    }
    // Terceiro caso: chamadas aninhadas para m > 0 e n > 0
    else if (m > 0 && n > 0) {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
    
    return 0; // Fallback caso receba valores negativos
}

int main() {
    long long m, n, resultado;

    // Leitura dos dois inteiros não-negativos
    if (scanf("%lld %lld", &m, &n) == 2) {
        
        // Chamada da função 
        resultado = ackermann(m, n);
        
        // Impressão do resultado
        printf("%lld\n", resultado);
    }

    return 0;
}