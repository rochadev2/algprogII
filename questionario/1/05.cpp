#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float perimetro, semi_p, area;

    // A leitura é feita diretamente, sem validações com 'if', para cumprir a restrição do problema
    scanf("%f %f %f", &a, &b, &c);

    // Cálculo do perímetro e do semiperímetro
    perimetro = a + b + c;
    semi_p = perimetro / 2.0;

    // Cálculo da área utilizando a Fórmula de Heron
    area = sqrt(semi_p * (semi_p - a) * (semi_p - b) * (semi_p - c));

    // Impressão dos resultados com a formatação exigida
    printf("Lados = %5.2f, %5.2f, %5.2f\n", a, b, c);
    printf("Perímetro = %5.2f\n", perimetro);
    printf("Área = %5.2f\n", area);

    return 0;
}