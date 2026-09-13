#include <stdio.h>

#define TAM 5

void lerNotas(float nota[], int tam) {
    for (int i = 0; i < tam; i++) {
        scanf("%f", &nota[i]);
    }
}

float calcularMedia(float nota[], int tam) {
    float soma = 0.0;
    for (int i = 0; i < tam; i++) {
        soma += nota[i];
    }
    return soma / tam;
}

void contarAcimaAbaixo(float nota[], int tam, float media, int *menor, int *maior) {
    // Inicialização direta através dos ponteiros
    *menor = 0;
    *maior = 0;
    
    for (int i = 0; i < tam; i++) {
        if (nota[i] < media) {
            (*menor)++;
        }
        if (nota[i] > media) {
            (*maior)++;
        }
    }
}

int main() {
    float nota[TAM], media;
    int menor, maior;

    lerNotas(nota, TAM);
    
    media = calcularMedia(nota, TAM);
    
    // O operador & obtém os endereços das variáveis para passá-las por referência
    contarAcimaAbaixo(nota, TAM, media, &menor, &maior);

    printf("\n%2.2f %d %d\n", media, menor, maior);

    return 0;
}