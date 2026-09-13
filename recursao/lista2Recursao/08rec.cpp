#include <stdio.h>
#include <stdbool.h>

// Função recursiva auxiliar para somar os divisores próprios
int soma_divisores(int n, int i) {
    // Caso base: se o divisor 'i' ultrapassar a metade de n, a recursão encerra
    if (i > n / 2) {
        return 0;
    }
    
    // Passo recursivo: se 'i' for divisor exato, soma e avança para o próximo; 
    // caso contrário, apenas avança para o próximo número
    if (n % i == 0) {
        return i + soma_divisores(n, i + 1);
    } else {
        return soma_divisores(n, i + 1);
    }
}

// Função exigida pelo enunciado
bool num_perf(int n) {
    if (n <= 1) {
        return false;
    }
    
    // Aciona a função recursiva começando a testar os divisores a partir de i = 1
    // Retorna true se a soma dos divisores próprios for igual a n
    return soma_divisores(n, 1) == n;
}

int main() {
    int numero;
    
    if (scanf("%d", &numero) == 1 && numero > 0) {
        if (num_perf(numero)) {
            printf("True\n");
        } else {
            printf("False\n");
        }
    }
    
    return 0;
}