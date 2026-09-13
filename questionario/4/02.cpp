#include <stdio.h>
#include <string.h>

// Definição da estrutura com os requisitos exatos de tamanho
typedef struct {
    int matricula;
    char nome[31]; // 30 caracteres + 1 para o terminador nulo '\0'
    char curso[31];
} tAluno;

int main() {
    tAluno alunos[5];
    char cursoPesquisa[31];

    // Leitura das informações dos 5 alunos
    for (int i = 0; i < 5; i++) {
        scanf("%d", &alunos[i].matricula);
        
        // O espaço antes do % instrui a linguagem a ignorar quebras de linha no buffer.
        // O formatador [^\n] faz com que o scanf leia toda a linha até o usuário apertar Enter.
        scanf(" %[^\n]", alunos[i].nome);
        scanf(" %[^\n]", alunos[i].curso);
    }

    // Leitura do nome do curso que será pesquisado
    scanf(" %[^\n]", cursoPesquisa);

    // Pesquisa e listagem dos alunos do curso correspondente
    for (int i = 0; i < 5; i++) {
        // A função strcmp compara duas strings e retorna 0 se forem estritamente iguais
        if (strcmp(alunos[i].curso, cursoPesquisa) == 0) {
            printf("%d %s\n", alunos[i].matricula, alunos[i].nome);
        }
    }

    return 0;
}