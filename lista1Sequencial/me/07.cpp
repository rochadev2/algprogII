#include <stdio.h>

// Função para ler a medida em pés
float ler_pes() {
    float pes_digitado;
    printf("Digite o valor (em pes): ");
    scanf("%f", &pes_digitado);
    return pes_digitado;
}

// Função para converter pés em polegadas (1 pé = 12 polegadas)
float calcular_polegadas(float pes) {
    // Retorna a conta direta
    return pes * 12.0;
}

// Função para converter pés em jardas (1 jarda = 3 pés)
float calcular_jardas(float pes) {
    // Para converter para uma unidade maior, dividimos
    return pes / 3.0;
}

// Função para converter jardas em milhas (1 milha = 1.760 jardas)
float calcular_milhas(float jardas) {
    // Para converter para uma unidade maior, dividimos
    return jardas / 1760.0;
}

// Função para exibir todos os resultados
void mostrar_resultados(float pes, float polegadas, float jardas, float milhas) {
    printf("\n--- Resultados ---\n");
    printf("Pes: %.2f\n", pes);
    printf("Polegadas: %.2f\n", polegadas);
    printf("Jardas: %.2f\n", jardas);
    printf("Milhas: %.4f\n", milhas); // Coloquei .4f porque milha costuma dar um número bem pequeno
}

int main() {
    float pes, polegadas, jardas, milhas;

    // 1. Ler os dados (agora guardando o valor na variável 'pes')
    pes = ler_pes();

    // 2. Fazer os cálculos (chamar as 3 funções)
    polegadas = calcular_polegadas(pes);
    jardas = calcular_jardas(pes);
    milhas = calcular_milhas(jardas);

    // 3. Mostrar os resultados
    mostrar_resultados(pes, polegadas, jardas, milhas);

    return 0;
}






















/*
#include <stdio.h>

// Função para ler a medida em pés
float ler_pes() {
    float pes;

    printf("Digite o valor (em pes): ");
    scanf("%f", &pes);
    
    return pes;
}

// Função para converter pés em polegadas (1 pé = 12 polegadas)
float calcular_polegadas(float pes) {
    float polegadas;

    return (polegadas = pes * 12);
}

// Função para converter pés em jardas (1 jarda = 3 pés)
float calcular_jardas(float pes) {
    float jardas;

    return  (jardas = pes * 3);
}

// Função para converter jardas em milhas (1 milha = 1.760 jardas)
// Dica: perceba que é mais fácil passar as jardas calculadas na função anterior para esta aqui!
float calcular_milhas(float jardas) {
    float milhas;
    
    return milhas = jardas * 1760; // Substitua pelo retorno correto
}

// Função para exibir todos os resultados
void mostrar_resultados(float pes, float polegadas, float jardas, float milhas) {
    // Sua lógica de saída (printf) aqui
    printf("pes: %.2f\npolegadas: %.2f\njardas: %.2f\nmilhas: %.2f\n", pes, polegadas, jardas, milhas);
}

int main() {
    float pes, polegadas, jardas, milhas;

    // 1. Ler os dados
    pes = ler_pes();

    printf("polegadas: \njardas: \nmilhas: \n");
    scanf("%.2f %.2f %.2f\n", &pes, &polegadas, &jardas, &milhas);

    // 2. Fazer os cálculos (chamar as 3 funções)
    polegadas = calcular_polegadas(pes);
    jardas = calcular_jardas(pes);
    milhas = calcular_milhas(jardas);

    // 3. Mostrar os resultados
    mostrar_resultados(pes, polegadas, jardas, milhas);

    return 0;
}
*/
