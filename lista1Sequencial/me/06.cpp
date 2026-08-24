#include <stdio.h>
#include <math.h>

// Função para ler o valor do raio (não precisa receber parâmetros)
float ler_raio() {
    float raio_digitado;
    printf("Digite o valor do raio: ");
    scanf("%f", &raio_digitado);
    return raio_digitado;
}

// Função para calcular a área do círculo
float calcular_area(float raio) {
    // Retorna o resultado do cálculo diretamente para não confundir as variáveis
    return M_PI * pow(raio, 2);
}

// Função para exibir o resultado final
void mostrar_resultado(float area) {
    printf("Area = %.2f\n", area);
}

int main() {
    float raio, area;

    // A função ler_raio() captura o valor e o atribui à variável 'raio'
    raio = ler_raio();

    // Calcula a área com base no raio
    area = calcular_area(raio);

    // Mostra o resultado
    mostrar_resultado(area);

    return 0;
}