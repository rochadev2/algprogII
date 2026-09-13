#include <stdio.h>

// leitura dos elementos do vetor
void lerVetor(float v[], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("Digite o elemento da posicao %d: ", i + 1);
        scanf("%f", &v[i]);
    }   
}

// impressao do vetor
void imprimirVetor(float v[], int tam) {
    printf("Vetor em ordem normal: ");
    for (int i = 0; i < tam; i++) {
        // Removido o '&' e adicionado '%.2f' para exibir duas casas decimais
        printf("%.1f ", v[i]); 
    }
    printf("\n");
}

//impressao em ordem inversa
void imprimirVetorInv(float v[], int tam) {
    printf("Vetor em ordem inversa: ");
    for (int i = tam - 1; i >= 0; i--) {
        printf("%.1f ", v[i]);
    }
}

int main(void) {
    int tamanho;
    
    // 1. O tamanho é lido antes da criação do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    
    // 2. O vetor é criado com o tamanho exato digitado pelo usuário
    float vetor[tamanho];
    
    lerVetor(vetor, tamanho);
    imprimirVetor(vetor, tamanho);
    imprimirVetorInv(vetor, tamanho);

    return 0;
}