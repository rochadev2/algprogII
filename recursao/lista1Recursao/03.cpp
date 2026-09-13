#include <stdio.h>
#include <stdbool.h> // Necessário para o retorno do tipo bool (true/false)

// Função recursiva com o protótipo exigido
bool contem_par(int n, int V[]) {
    // Condição de parada (caso base): o vetor foi todo percorrido
    if (n == 0) {
        return false;
    }
    // Verifica se o último elemento do escopo atual é par
    else if (V[n - 1] % 2 == 0) {
        return true;
    }
    // Passo recursivo: chama a função diminuindo o tamanho analisado do vetor
    else {
        return contem_par(n - 1, V);
    }
}

int main() {
    int n;

    // Leitura da quantidade de elementos
    printf("Digite o numero de elementos n (n <= 10): ");
    
    // Validação da restrição estrutural do vetor
    if (scanf("%d", &n) == 1 && n >= 1 && n <= 10) {
        int A[10];

        // Leitura dos elementos do vetor A
        for (int i = 0; i < n; i++) {
            printf("Digite o valor da posicao %d: ", i);
            scanf("%d", &A[i]);
        }

        // Aciona a função recursiva e avalia o retorno lógico booleano
        if (contem_par(n, A)) {
            printf("True\n");
        } else {
            printf("False\n");
        }
    } else {
        printf("Tamanho invalido. O vetor deve ter no maximo 10 elementos.\n");
    }

    return 0;
}