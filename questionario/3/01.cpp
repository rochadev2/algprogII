#include <stdio.h>
#include <string.h>

#define MAX 20 // Definição do tamanho do vetor de caracteres

// Função com a assinatura exata exigida na especificação
void mediaAR(float media, float notaAP, char mensagem[MAX]) {
    if (media >= notaAP) {
        strcpy(mensagem, "Aprovado");
    } else {
        strcpy(mensagem, "Reprovado");
    }
}

int main() {
    float notaMinima, mediaAluno;
    char resultado[MAX];

    // Leitura dos dois números de entrada: nota mínima de aprovação e média do estudante
    if (scanf("%f %f", &notaMinima, &mediaAluno) == 2) {
        
        // Chamada da função para computar a mensagem
        mediaAR(mediaAluno, notaMinima, resultado);
        
        // Impressão do resultado formatado com uma casa decimal e a mensagem
        printf("%.1f %s\n", mediaAluno, resultado);
    }

    return 0;
}