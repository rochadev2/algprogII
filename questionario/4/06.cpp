#include <stdio.h>
#include <string.h>

// Estrutura para vincular o nome do produto ao seu preço
typedef struct {
    char nome[51]; // 50 caracteres permitidos + 1 para o terminador '\0'
    float preco;
} Produto;

int main() {
    int casosTeste;
    
    // Leitura da quantidade de idas à feira
    if (scanf("%d", &casosTeste) == 1) {
        
        for (int i = 0; i < casosTeste; i++) {
            int qtdDisponivel;
            scanf("%d", &qtdDisponivel);
            
            // Vetor dimensionado dinamicamente para os itens da feira atual
            Produto catalogo[qtdDisponivel];
            
            // Leitura do catálogo de produtos e preços
            for (int j = 0; j < qtdDisponivel; j++) {
                scanf("%s %f", catalogo[j].nome, &catalogo[j].preco);
            }
            
            int qtdComprada;
            scanf("%d", &qtdComprada);
            
            float valorTotal = 0.0;
            char nomeDesejado[51];
            int quantidade;
            
            // Processamento da lista de compras
            for (int j = 0; j < qtdComprada; j++) {
                scanf("%s %d", nomeDesejado, &quantidade);
                
                // Busca linear: procura o item desejado dentro do catálogo
                for (int k = 0; k < qtdDisponivel; k++) {
                    if (strcmp(catalogo[k].nome, nomeDesejado) == 0) {
                        valorTotal += catalogo[k].preco * quantidade;
                        break; // Interrompe a busca assim que encontra o produto
                    }
                }
            }
            
            // Impressão com o prefixo 'R$' e exatas duas casas decimais
            printf("R$ %.2f\n", valorTotal);
        }
    }

    return 0;
}