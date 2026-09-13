#include <stdio.h>
#include <stdbool.h>

// Função que verifica se os lados formam um triângulo retângulo
bool testetri(double a, double b, double c) {
    // O Teorema de Pitágoras define que a soma dos quadrados dos catetos é igual ao quadrado da hipotenusa
    if ((a * a) + (b * b) == (c * c)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    double ladoA, ladoB, hipotenusa;

    // Leitura dos 3 valores em ponto flutuante, assumindo que o último é a hipotenusa
    if (scanf("%lf %lf %lf", &ladoA, &ladoB, &hipotenusa) == 3) {
        
        // Verifica o retorno da função para imprimir a mensagem correspondente
        if (testetri(ladoA, ladoB, hipotenusa)) {
            printf("%.1lf %.1lf %.1lf formam um triângulo retângulo\n", ladoA, ladoB, hipotenusa);
        } else {
            printf("%.1lf %.1lf %.1lf não formam um triângulo retângulo\n", ladoA, ladoB, hipotenusa);
        }
    }

    return 0;
}