#include <stdio.h>

//validacao: verifica se os valores são validos
int validacaoValores(float sal, float porc) {
    if (sal || porc > 0) {
        return 1;
    } else {
        return 0;
    }
}

//processamento: realiza o cálculo
float aumentoSalario(float sal, float porc) {
    return (sal + (porc / 100 * sal));
}

//saida
void exibirSalarios(float salAntigo, float salNovo, float porc) {
    printf("Salario antigo: %.2f\nSalario novo com os %.2f%% de acrescimo: %.2f", salAntigo, salNovo, porc);
}

int main(void) {
    float salarioAtual, porcentagem, salarioNovo;

    printf("digite o salario atual: \n");
    scanf("%f", &salarioAtual);

    printf("digite o aumento (porcentagem): \n");
    scanf("%f", &porcentagem);

    salarioNovo = aumentoSalario(salarioAtual, porcentagem);

    exibirSalarios(salarioAtual, porcentagem, salarioNovo);

    return 0;
}