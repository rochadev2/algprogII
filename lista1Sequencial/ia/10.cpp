#include <stdio.h>

// Função genérica para ler valores em dinheiro
float ler_valor(char nome_operacao[]) {
    float valor;
    printf("Digite o valor para o %s: ", nome_operacao);
    scanf("%f", &valor);
    return valor;
}

// Função para calcular a taxa de 0.38% sobre um valor sacado
float calcular_taxa(float valor_saque) {
    // 0.38% é o mesmo que 0.38 / 100 = 0.0038
    return valor_saque * 0.0038; 
}

// Função para calcular o saldo final
float calcular_saldo_final(float deposito, float saque1, float taxa1, float saque2, float taxa2) {
    // O saldo é o depósito menos os saques e menos as taxas cobradas
    return deposito - saque1 - taxa1 - saque2 - taxa2;
}

// Função para exibir o saldo final na tela
void mostrar_resultado(float saldo_final) {
    printf("\n--- Resumo da Conta ---\n");
    printf("Saldo Final: R$ %.2f\n", saldo_final);
}

int main() {
    float deposito, saque1, saque2;
    float taxa1, taxa2, saldo_final;

    // 1. Ler os dados
    // Veja como a palavra entre aspas substitui o %s dentro do printf da função ler_valor!
    deposito = ler_valor("deposito");
    saque1 = ler_valor("primeiro saque");
    saque2 = ler_valor("segundo saque");

    // 2. Calcular as taxas de cada saque
    taxa1 = calcular_taxa(saque1);
    taxa2 = calcular_taxa(saque2);

    // 3. Calcular o saldo final
    saldo_final = calcular_saldo_final(deposito, saque1, taxa1, saque2, taxa2);

    // 4. Mostrar o resultado
    mostrar_resultado(saldo_final);

    return 0;
}