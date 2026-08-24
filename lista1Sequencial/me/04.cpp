#include <stdio.h>

// 1. Função para ler os dados (usando passagem por referência para alterar as variáveis originais)
void lerEntradas(float &deposito, float &taxaJuros) {
    // Sua lógica de leitura aqui
    scanf("%f %f", &deposito, &taxaJuros);
}

// 2. Função para calcular o valor do rendimento
float calcularRendimento(float deposito, float taxaJuros) {
    // Sua lógica de cálculo aqui
    return taxaJuros / 100 * deposito; 
}

// 3. Função para calcular o valor total depois do rendimento
float calcularValorTotal(float deposito, float rendimento) {
    // Sua lógica de cálculo aqui
    return deposito + rendimento; 
}

// 4. Função para mostrar os resultados na tela
void mostrarResultados(float rendimento, float valorTotal) {
    // Sua lógica de impressão aqui
    printf("Seu dinheiro rendeu: %.2f e resultou num valor total de: %.2f.\n", rendimento, valorTotal);
}

int main() {
    // Declaração das variáveis
    float deposito = 0.0f;
    float taxaJuros = 0.0f;
    float rendimento = 0.0f;
    float valorTotal = 0.0f;

    // Ordem de execução sugerida (descomente quando implementar a lógica):
    
    printf("digite o valor do deposito e da taxa de juros: \n");
    lerEntradas(deposito, taxaJuros);
    
    rendimento = calcularRendimento(deposito, taxaJuros);
    
    valorTotal = calcularValorTotal(deposito, rendimento);
    
    mostrarResultados(rendimento, valorTotal);

    return 0;
}