#include <stdio.h>

// Função que calcula o piso de log2(n)
int piso_log2(int n) {
    int resultado = 0;
    while (n > 1) {
        n /= 2;
        resultado++;
    }
    return resultado;
}

int main() {
    int n;

    // O laço while continuará lendo e processando enquanto o sistema enviar dados válidos
    while (scanf("%d", &n) == 1) {
        printf("%d\n", piso_log2(n));
    }

    return 0;
}