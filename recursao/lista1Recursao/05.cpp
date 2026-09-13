#include <stdio.h>

// Função recursiva com os argumentos exigidos
int div(int m, int n) {
    // Condição de parada (caso base): o dividendo se tornou menor que o divisor
    if (m < n) {
        return 0;
    } 
    // Passo recursivo: subtrai n de m e acumula 1 na pilha de chamadas
    else {
        return 1 + div(m - n, n);
    }
}

int main() {
    int m, n;

    // Leitura dos números naturais
    printf("Digite o valor de m (dividendo): ");
    if (scanf("%d", &m) == 1 && m >= 0) {
        
        printf("Digite o valor de n (divisor > 0): ");
        if (scanf("%d", &n) == 1 && n > 0) {
            
            // Aciona a função e imprime o resultado da divisão inteira
            printf("O resultado da divisao inteira e: %d\n", div(m, n));
            
        } else {
            printf("Divisor invalido. 'n' deve ser maior que 0.\n");
        }
    } else {
        printf("Dividendo invalido.\n");
    }

    return 0;
}