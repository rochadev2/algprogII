#include <stdio.h>

// 1. Validação: verifica se a soma dos pesos não resulta em divisão por zero
int validarPesos(float p1, float p2, float p3) {
    // Retorna 1 (verdadeiro) se for válido ou 0 (falso) se a soma for zero
    if ((p1 + p2 + p3) != 0) {
        return 1;
    } else {
        return 0;
    }
}

// 2. Processamento: realiza exclusivamente o cálculo matemático
float calcularMediaPonderada(float n1, float n2, float n3, float p1, float p2, float p3) {
    // Retorna o resultado da fórmula da média ponderada
    return (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);
}

// 3. Saída: recebe o valor final calculado e formata a impressão na tela
void exibirResultado(float media) {
    printf("Media ponderada: %.2f\n", media);
}

int main(void) {
    float n1, n2, n3, p1, p2, p3, media;

    printf("Digite as tres notas: \n");
    scanf("%f %f %f", &n1, &n2, &n3);

    printf("Digite os tres pesos: \n");
    scanf("%f %f %f", &p1, &p2, &p3);

    if (validarPesos) {
        media = calcularMediaPonderada(n1, n2, n3, p1, p2, p3);
    } else {
        printf("impossivel dividir por zero.\n");
    }

    exibirResultado(media);
    
    return 0;
}