#include <stdio.h>
#include <math.h>

float lerValor() {
    float valorEspetaculo;
    
    printf("Digite o valor do espetaculo: \n");
    scanf("%f", &valorEspetaculo);

    return valorEspetaculo;
}

int calcularQuantidadeMinima(float custoEspetaculo, float precoConvite) {
    return custoEspetaculo / precoConvite;
}

void mostrarResultado(int quantidadeConvites) {
    printf("-- Quantidade de convites que precisam ser vendidos para custear o evento --\n");
    printf("%d", &quantidadeConvites);
}

int main() {
    float custoEspetaculo, precoConvite;
    int quantidadeConvites;

    custoEspetaculo = lerValor();
    precoConvite = lerValor();

    quantidadeConvites = calcularQuantidadeMinima(custoEspetaculo, precoConvite);

    mostrarResultado(quantidadeConvites);

    return 0;
}