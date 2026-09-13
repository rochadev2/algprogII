#include <stdio.h>

// Função recursiva com a interface exigida
int mdc(int a, int b) {
    int resto = a % b;
    
    // Condição de parada: se o resto for 0, o divisor atual (b) é o MDC
    if (resto == 0) {
        return b;
    } 
    // Passo recursivo: repete o processo passando o divisor anterior (b) para o lugar de 'a' e o resto para 'b'
    else {
        return mdc(b, resto);
    }
}

int main() {
    int num1, num2;
    
    // Lê o par de números inteiros
    if (scanf("%d %d", &num1, &num2) == 2) {
        // Calcula e imprime o máximo divisor comum
        printf("%d\n", mdc(num1, num2));
    }
    
    return 0;
}