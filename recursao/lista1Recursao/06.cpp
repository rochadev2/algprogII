#include <stdio.h>

// Função recursiva que devolve a lista de pares por parâmetro
void extrai_pares(int n, int A[], int pares[], int *qtd) {
    // Condição de parada (caso base): o vetor foi todo percorrido
    if (n == 0) {
        return;
    }
    
    // Passo recursivo: a chamada anterior ocorre primeiro para garantir 
    // que o preenchimento do vetor 'pares' mantenha a ordem original de 'A'
    extrai_pares(n - 1, A, pares, qtd);
    
    // Verifica se o elemento do escopo atual é par
    if (A[n - 1] % 2 == 0) {
        pares[*qtd] = A[n - 1]; // Atribui o valor par ao novo vetor
        (*qtd)++;               // Incrementa a quantidade total de pares (usando o ponteiro)
    }
}

int main() {
    int n;

    // Leitura da quantidade de elementos
    printf("Digite o numero de elementos n (n <= 20): ");
    
    // Validação da restrição estrutural (n <= 20)
    if (scanf("%d", &n) == 1 && n >= 1 && n <= 20) {
        int A[20];
        int pares[20];
        int qtd_pares = 0; // Variável para controlar o tamanho efetivo do vetor de pares

        // Leitura dos elementos do vetor original A
        for (int i = 0; i < n; i++) {
            printf("Digite o valor da posicao %d: ", i);
            scanf("%d", &A[i]);
        }

        // Aciona a função recursiva repassando os vetores e o endereço de 'qtd_pares'
        extrai_pares(n, A, pares, &qtd_pares);

        // Impressão da lista (vetor) devolvida
        printf("Lista de elementos pares: ");
        if (qtd_pares > 0) {
            for (int i = 0; i < qtd_pares; i++) {
                printf("%d ", pares[i]);
            }
            printf("\n");
        } else {
            printf("Nenhum numero par encontrado.\n");
        }
    } else {
        printf("Tamanho invalido. O vetor deve ter no maximo 20 elementos.\n");
    }

    return 0;
}