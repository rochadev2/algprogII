#include <stdio.h>

int main(void) {
    int matricula, horasTrabalhadas, numeroFilhos;
    float valorHora, salarioInicial, salarioFinal;

    printf("informe a matricula: \n");
    scanf("%d", &matricula);

    printf("informe o numero de horas trabalhadas no mes: \n");
    scanf("%d", &horasTrabalhadas);

    printf("informe o valor recebido por hora: \n");
    scanf("%f", &valorHora);

    printf("informe o numero de filhos: \n");
    scanf("%d", &numeroFilhos);

    salarioInicial = horasTrabalhadas * valorHora;

    printf("Salario sem considerar o acrescimo por filho: %.2f.\n", salarioInicial);

    salarioFinal = salarioInicial + (numeroFilhos * (0.1 * salarioInicial));
    printf("Salario considerando o acrescimo por filho: %.2f.\n", salarioFinal);

    return 0;
}