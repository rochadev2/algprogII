#include <stdio.h>

// Definição da estrutura interna (Aluno)
typedef struct {
    char nome[21]; // 20 caracteres exigidos + 1 espaço para o terminador nulo '\0'
    float media;
} tAluno;

// Definição da estrutura externa (Sala - Registro de Registros)
typedef struct {
    tAluno alunos[5]; // Vetor de alunos embutido na sala
    int codigo;
} tSala;

// Função que recebe APENAS a sala como parâmetro e realiza as impressões
void imprimirSala(tSala sala) {
    float soma = 0.0;
    
    // Imprime o código da turma
    printf("Sala: %d\n", sala.codigo);
    
    // Imprime os dados de cada aluno e acumula a nota para a média geral
    for (int i = 0; i < 5; i++) {
        printf("%s %.2f\n", sala.alunos[i].nome, sala.alunos[i].media);
        soma += sala.alunos[i].media;
    }
    
    // Calcula e imprime a média da turma
    printf("Media: %.2f\n", soma / 5.0);
}

int main() {
    tSala minhaSala;
    
    // Leitura do código da turma
    scanf("%d", &minhaSala.codigo);
    
    // Leitura das informações dos 5 alunos
    for (int i = 0; i < 5; i++) {
        // O espaço antes do % ignora as quebras de linha deixadas no buffer pelo scanf anterior
        scanf(" %[^\n]", minhaSala.alunos[i].nome);
        scanf("%f", &minhaSala.alunos[i].media);
    }
    
    // Aciona a função repassando a estrutura completa preenchida
    imprimirSala(minhaSala);
    
    return 0;
}