#include <stdio.h>

// 1. Função para ler os dados (usando passagem por referência para alterar as variáveis)
void lerEntradas(float &base, float &altura) {
    // Sua lógica de leitura aqui (dica: use scanf)
    printf("Digite o valor da base e da altura: \n");
    scanf("%f %f", &base, &altura);
}

// 2. Função para calcular a área do triângulo
float calcularArea(float base, float altura) {
    // Sua lógica de cálculo aqui (dica: aplique a fórmula da imagem)
    return (base * altura) / 2; 
}

// 3. Função para mostrar o resultado na tela
void mostrarResultado(float area) {
    // Sua lógica de impressão aqui (dica: use printf)
}

int main() {
    // Declaração das variáveis
    float base = 0.0f;
    float altura = 0.0f;
    float area = 0.0f;

    // Ordem de execução sugerida (descomente e ajuste os textos quando implementar a lógica):
    
    // printf("Digite a base e a altura do triangulo: \n");
    // lerEntradas(base, altura);
    // 
    // area = calcularArea(base, altura);
    // 
    // mostrarResultado(area);

    return 0;
}