#include <stdio.h>

void lerVetor(int v[], int n) {
    printf("Digite %d números: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
}

void imprimirVetor(int v[], int n) {
    printf("Os %d números digitados são: ", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    // Declaração do vetor com tamanho variável (VLA - Variable Length Array)
    int v[n];

    lerVetor(v, n);
    imprimirVetor(v, n);

    return 0;
}