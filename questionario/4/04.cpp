#include <stdio.h>

// Definição da estrutura do eletrodoméstico
typedef struct {
    char nome[16]; // 15 letras permitidas + 1 espaço para o terminador nulo '\0'
    float potencia;
    float tempoAtivo;
} Eletrodomestico;

int main() {
    Eletrodomestico eletros[5];
    float consumoIndividual[5];
    float consumoTotal = 0.0;
    int tempoDias;

    // 1. Leitura dos dados dos 5 eletrodomésticos
    for (int i = 0; i < 5; i++) {
        // O espaço antes do % ignora as quebras de linha deixadas no buffer
        scanf(" %[^\n]", eletros[i].nome);
        scanf("%f", &eletros[i].potencia);
        scanf("%f", &eletros[i].tempoAtivo);
    }

    // 2. Leitura do tempo t (em dias)
    scanf("%d", &tempoDias);

    // 3. Processamento dos consumos
    for (int i = 0; i < 5; i++) {
        // Consumo de 1 eletrodoméstico = Potência (kW) * Tempo (h) * Dias
        consumoIndividual[i] = eletros[i].potencia * eletros[i].tempoAtivo * tempoDias;
        
        // Acumula o valor no consumo total da casa
        consumoTotal += consumoIndividual[i];
    }

    // 4. Impressão do resultado final formatado
    printf("%.2f\n", consumoTotal);
    
    for (int i = 0; i < 5; i++) {
        // Regra de três para descobrir a porcentagem do aparelho em relação ao total
        float percentual = (consumoIndividual[i] / consumoTotal) * 100.0;
        printf("%.2f\n", percentual);
    }

    return 0;
}