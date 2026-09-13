#include <stdio.h>

// Define o tamanho fixo da prova como 20 questões
#define QTD_QUESTOES 20

// Função genérica para ler 20 caracteres
void lerRespostas(char vetor[]) {
    for (int i = 0; i < QTD_QUESTOES; i++) {
        // A leitura com espaço antes do %c ignora eventuais quebras de linha ou espaços vazios deixados no buffer
        scanf(" %c", &vetor[i]); 
    }
}

// Função que compara o vetor do aluno com o gabarito e retorna o total de acertos
int calcularAcertos(char gabarito[], char respostas[]) {
    int acertos = 0;
    for (int i = 0; i < QTD_QUESTOES; i++) {
        if (gabarito[i] == respostas[i]) {
            acertos++;
        }
    }
    return acertos;
}

int main() {
    int n;
    char gabarito[QTD_QUESTOES];
    char respostasAluno[QTD_QUESTOES];

    printf("Digite a quantidade de estudantes (n): ");
    scanf("%d", &n);

    printf("Digite as 20 respostas do gabarito oficial:\n");
    lerRespostas(gabarito);

    // Processa o cartão de cada aluno individualmente
    for (int i = 0; i < n; i++) {
        printf("Digite as 20 respostas do aluno %d:\n", i + 1);
        lerRespostas(respostasAluno);
        
        // Computa a nota chamando a função auxiliar
        int nota = calcularAcertos(gabarito, respostasAluno);
        
        printf("Acertos do aluno %d: %d\n\n", i + 1, nota);
    }

    return 0;
}