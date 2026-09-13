#include <stdio.h>

// Função recursiva responsável por intercalar os vetores
void intercalaRecursivo(int A[], int B[], int C[], int n, int idx) {
    // Condição de parada (caso base): a função processou todos os 'n' elementos
    if (idx == n) {
        return;
    }

    // O índice de um vetor pode ser o resultado de uma expressão matemática, 
    // permitindo calcular a posição exata de destino[cite: 11].
    // Como a regra exige começar pelo vetor A, ele ocupa as posições pares (2 * idx) de C.
    // O vetor B ocupa as posições ímpares (2 * idx + 1) de C.
    C[2 * idx] = A[idx];
    C[2 * idx + 1] = B[idx];

    // Passo recursivo: avança para processar o próximo índice dos vetores originais
    intercalaRecursivo(A, B, C, n, idx + 1);
}

int main() {
    int n;

    // Leitura do tamanho n
    if (scanf("%d", &n) == 1 && n <= 50) {
        
        // A declaração de vetores com tamanho variável (VLA) é mantida na função principal 
        // e executada apenas após o usuário digitar o valor[cite: 3, 10].
        int A[n];
        int B[n];
        int C[2 * n]; // O vetor resultante C requer o dobro do espaço
        
        // Leitura sequencial do vetor A
        for (int i = 0; i < n; i++) {
            scanf("%d", &A[i]);
        }
        
        // Leitura sequencial do vetor B
        for (int i = 0; i < n; i++) {
            scanf("%d", &B[i]);
        }

        // Aciona a função recursiva repassando os vetores e começando pelo índice 0
        intercalaRecursivo(A, B, C, n, 0);

        // Impressão do vetor C resultante
        for (int i = 0; i < 2 * n; i++) {
            printf("%d ", C[i]);
        }
        printf("\n");
    }

    return 0;
}