#include <stdio.h>

#define TAM 100 /* Constante que define o tamanho máximo do vetor */

// Função que recebe um vetor de inteiros e retorna 1 se é crescente e 0, caso contrário
int crescente(int v[TAM], int tam) {
    // Percorre o vetor até o penúltimo elemento
    for (int i = 0; i < tam - 1; i++) {
        // Se o elemento atual for maior ou igual ao próximo, não é estritamente crescente
        if (v[i] >= v[i + 1]) {
            return 0;
        }
    }
    // Se o laço terminar sem encontrar quebras na ordem, o vetor é crescente
    return 1;
}

int main() {
    int tam;
    int vetor[TAM];

    // Leitura do tamanho real do vetor a ser utilizado
    if (scanf("%d", &tam) == 1) {
        
        // Leitura dos elementos da lista
        for (int i = 0; i < tam; i++) {
            scanf("%d", &vetor[i]);
        }

        // Chamada da função e impressão do resultado correspondente
        if (crescente(vetor, tam) == 1) {
            printf("verdadeiro\n");
        } else {
            printf("falso\n");
        }
    }

    return 0;
}