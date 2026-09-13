#include <stdio.h>

// Função que recebe a lista w, seu tamanho e o alvo k
// Devolve o número total de vezes que k ocorre na lista
int conta(int w[], int tamanho, int k) {
    int ocorrencias = 0;
    
    // Percorre a lista inteira
    for (int i = 0; i < tamanho; i++) {
        // Se o valor na posição atual for igual a k, incrementa a contagem
        if (w[i] == k) {
            ocorrencias++;
        }
    }
    
    return ocorrencias;
}

int main() {
    int tamanho, k;
    
    // Leitura do tamanho da lista
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
        scanf("%d", &k);
        
        // Aciona a função e armazena o retorno
        int resultado = conta(w, tamanho, k);
        
        // Impressão do resultado
        printf("O numero %d ocorre %d vez(es) na lista.\n", k, resultado);
    } else {
        printf("Tamanho invalido.\n");
    }
    
    return 0;
}