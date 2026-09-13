#include <stdio.h>

#define QTD_QUESTAO 3

// Adicionado o parâmetro idAluno para identificar o estudante
void lerResposta(char respostas[], int idAluno) {
    printf("\n--- Lendo respostas do Aluno %d ---\n", idAluno);
    for(int i = 0; i < QTD_QUESTAO; i++) {
        printf("Digite a resposta da questao %d: ", i + 1);
        // O espaço antes do %c ignora eventuais quebras de linha ou espaços vazios deixados no buffer
        scanf(" %c", &respostas[i]); 
    }
}

// Adicionado o parâmetro idAluno para rotular a saída
void imprimirResposta(char respostas[], int idAluno) {   
    printf("Respostas do Aluno %d: ", idAluno);
    for(int i = 0; i < QTD_QUESTAO; i++) {
        printf("%c ", respostas[i]);
    }
    printf("\n");
}

int main(void) {
    int qtdAlunos;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qtdAlunos);

    // Vetor único criado após a leitura, reutilizado para todos os alunos
    char respostasAluno[QTD_QUESTAO];

    // Processa o cartão de cada aluno individualmente
    for (int i = 0; i < qtdAlunos; i++) {
        // Passa o vetor e o número do aluno atual (i + 1 para começar do Aluno 1)
        lerResposta(respostasAluno, i + 1);
        imprimirResposta(respostasAluno, i + 1);
    }

    return 0;
}