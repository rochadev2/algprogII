#include <stdio.h>

// Função recursiva que inverte as posições dos elementos
void inverter(int vetor[], int inicio, int fim) {
    // Condição de parada (caso base): os índices se igualaram ou se cruzaram no meio
    if (inicio >= fim) {
        return;
    }
    
    // Troca os elementos nas extremidades opostas atuais usando uma variável temporária
    int temp = vetor[inicio];
    vetor[inicio] = vetor[fim];
    vetor[fim] = temp;
    
    // Passo recursivo: avança o índice de início e recua o índice de fim
    inverter(vetor, inicio + 1, fim - 1);
}

// Programa principal para testar a função
int main() {
    int A[] = {10, 20, 30, 40, 50};
    int n = 5; // Tamanho total do vetor
    
    // Impressão da entrada
    printf("Entrada: A = <");
    for (int i = 0; i < n; i++) {
        printf("%d%s", A[i], (i < n - 1) ? "," : "");
    }
    printf(">\n");

    // O tamanho da estrutura define a posição do último elemento válido (n - 1)
    int fim = n - 1;

    // Aciona a função recursiva repassando o vetor, o índice inicial (0) e o final
    inverter(A, 0, fim);

    // Impressão da saída após a inversão
    printf("Saida: A = <");
    for (int i = 0; i < n; i++) {
        printf("%d%s", A[i], (i < n - 1) ? "," : "");
    }
    printf(">\n");

    return 0;
}