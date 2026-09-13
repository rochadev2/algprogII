#include <stdio.h>

// Função que computa o maior fator de um dado inteiro |n| > 1
int maxfator(int numero) {
    // Garante o tratamento do valor absoluto, conforme a especificação |n|
    if (numero < 0) {
        numero = -numero;
    }
    
    // O maior fator possível (excluindo o próprio número) nunca será maior que a sua metade.
    // O laço decresce buscando a primeira divisão com resto zero.
    for (int i = numero / 2; i >= 1; i--) {
        if (numero % i == 0) {
            return i;
        }
    }
    
    return 1; // Retorna 1 se for número primo
}

int main() {
    int numero, resultado;

    // Leitura do número inteiro de entrada
    if (scanf("%d", &numero) == 1) {
        
        // Chamada da função para computar o maior fator
        resultado = maxfator(numero);
        
        // Impressão do número original e do fator calculado, separados por espaço
        printf("%d %d\n", numero, resultado);
    }

    return 0;
}