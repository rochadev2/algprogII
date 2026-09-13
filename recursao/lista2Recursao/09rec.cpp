#include <stdio.h>

// Função recursiva com os argumentos exigidos
int conta(int w[], int tamanho, int k) {
    // Condição de parada (caso base): a lista foi toda percorrida
    if (tamanho == 0) {
        return 0;
    }
    
    // Verifica se o último elemento do escopo atual é igual a k
    // O índice correspondente ao tamanho atual é tamanho - 1
    if (w[tamanho - 1] == k) {
        return 1 + conta(w, tamanho - 1, k); // Acumula 1 e repassa a lista reduzida
    } else {
        return conta(w, tamanho - 1, k);     // Repassa a lista reduzida sem somar
    }
}

int main() {
    int tamanho, k;
    
    // Leitura do tamanho da lista w
    printf("Digite o tamanho da lista w: ");
    if (scanf("%d", &tamanho) == 1 && tamanho > 0) {
        
        // A declaração de vetores com tamanho variável (VLA) é executada 
        // apenas após o usuário digitar o valor.
        int w[tamanho];
        
        // Leitura dos elementos do vetor w
        printf("Digite os %d elementos da lista: ", tamanho);
        for (int i = 0; i < tamanho; i++) {
            scanf("%d", &w[i]);
        }
        
        // Leitura do número k procurado
        printf("Digite o numero k que deseja buscar: ");
        if (scanf("%d", &k) == 1) {
            
            // Aciona a função recursiva e imprime o resultado
            int resultado = conta(w, tamanho, k);
            printf("O numero %d ocorre %d vez(es) em w.\n", k, resultado);
            
        }
    } else {
        printf("Tamanho invalido.\n");
    }
    
    return 0;
}