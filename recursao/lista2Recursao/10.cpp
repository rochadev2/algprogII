#include <stdio.h>

// Função que recebe a lista w, seu tamanho, o alvo k e a lista de posições para preencher.
// Retorna a quantidade total de ocorrências encontradas.
int lposicoes(int w[], int tamanho, int k, int posicoes[]) {
    int qtd_ocorrencias = 0;
    
    // Percorre a lista inteira
    for (int i = 0; i < tamanho; i++) {
        // Se o valor na posição atual for igual a k, salva o índice
        if (w[i] == k) {
            posicoes[qtd_ocorrencias] = i; 
            qtd_ocorrencias++; // Incrementa o contador para a próxima posição
        }
    }
    
    return qtd_ocorrencias;
}

int main() {
    int tamanho, k;
    
    // Leitura do tamanho da lista original
    printf("Digite o tamanho da lista w: ");
    if (scanf("%d", &tamanho) == 1 && tamanho > 0) {
        
        // A declaração de vetores com tamanho variável (VLA) é mantida na função principal 
        // e executada apenas após o usuário digitar o valor[cite: 4, 10].
        int w[tamanho];
        int posicoes[tamanho]; // O vetor de posições nunca será maior que o vetor original
        
        // Leitura dos elementos do vetor w
        printf("Digite os %d elementos da lista: ", tamanho);
        for (int i = 0; i < tamanho; i++) {
            scanf("%d", &w[i]);
        }
        
        // Leitura do número k procurado
        printf("Digite o numero k que deseja buscar: ");
        scanf("%d", &k);
        
        // Aciona a função repassando os vetores
        int qtd = lposicoes(w, tamanho, k, posicoes);
        
        // Impressão do resultado
        printf("O numero %d ocorre nas posicoes: ", k);
        if (qtd > 0) {
            for (int i = 0; i < qtd; i++) {
                printf("%d ", posicoes[i]);
            }
            printf("\n");
        } else {
            printf("Nenhuma.\n");
        }
    }
    
    return 0;
}