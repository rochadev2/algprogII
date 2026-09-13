#include <stdio.h>

// Definição da constante obrigatória exigida no enunciado
#define MAX 20 

// Estrutura fornecida pela especificação
struct grao {
    char tipo; 
    char nome[MAX+1];
    float peso;
    float precoKG;
};

int main() {
    struct grao graos[3];

    // 1. Leitura dos dados dos 3 grãos
    for (int i = 0; i < 3; i++) {
        // A leitura com " %[^\n]" ignora o 'Enter' anterior e lê a string com espaços
        scanf(" %[^\n]", graos[i].nome);
        scanf(" %c", &graos[i].tipo);
        scanf("%f", &graos[i].peso);
        scanf("%f", &graos[i].precoKG);
    }

    // 2. Identificação do melhor tipo disponível
    // Como A=65, B=66 e C=67 na tabela ASCII, o menor caractere representa o melhor tipo
    char melhorTipo = 'Z'; 
    for (int i = 0; i < 3; i++) {
        if (graos[i].tipo < melhorTipo) {
            melhorTipo = graos[i].tipo;
        }
    }

    // 3. Contagem de empates
    int empatados[3];
    int qtdEmpate = 0;
    for (int i = 0; i < 3; i++) {
        if (graos[i].tipo == melhorTipo) {
            empatados[qtdEmpate] = i; // Guarda a posição original do grão empatado
            qtdEmpate++;
        }
    }

    int indexIdeal = -1;

    // 4. Lógica de decisão (Vitória Direta vs. Desempate por Custo)
    if (qtdEmpate == 1) {
        // Vitória direta, sem empate
        indexIdeal = empatados[0];
    } else {
        // Ocorre empate: requer a leitura da quantidade (KG) e avalia o custo financeiro
        float menorCusto = -1;
        for (int i = 0; i < qtdEmpate; i++) {
            float quantidade, custoTotal;
            
            // O enunciado exige omitir os 'printf' solicitando valores. O scanf é direto.
            scanf("%f", &quantidade); 
            
            custoTotal = quantidade * graos[empatados[i]].precoKG;
            
            // Assume o primeiro da lista como o menor custo inicial, substituindo se houver mais baratos
            if (menorCusto < 0 || custoTotal < menorCusto) {
                menorCusto = custoTotal;
                indexIdeal = empatados[i];
            }
        }
    }

    // 5. Impressão final formatada de acordo com os exemplos
    printf("O grão ideal é o/a %s\n", graos[indexIdeal].nome);

    return 0;
}