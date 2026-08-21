#include <stdio.h>

// Calcula o salário base (horas * valor por hora)
float calcularSalarioInicial(int horas, float valorHora) {
    return horas * valorHora;
}

// Calcula o salário final aplicando 10% de acréscimo por filho
float calcularSalarioFinal(float salarioInicial, int numeroFilhos) {
    const float PERCENTUAL_POR_FILHO = 0.10f;
    return salarioInicial + (numeroFilhos * (PERCENTUAL_POR_FILHO * salarioInicial));
}

// Responsável apenas pela exibição formatada dos resultados
void exibirResumo(int matricula, float salarioInicial, float salarioFinal) {
    printf("\n--- Resumo de Pagamento ---\n");
    printf("Matricula: %d\n", matricula);
    printf("Salario sem acrescimo: R$ %.2f\n", salarioInicial);
    printf("Salario final (com acrescimo por filho): R$ %.2f\n", salarioFinal);
}

int main(void) {
    int matricula, horasTrabalhadas, numeroFilhos;
    float valorHora, salarioInicial, salarioFinal;

    printf("Informe a matricula: ");
    scanf("%d", &matricula);

    printf("Informe o numero de horas trabalhadas no mes: ");
    scanf("%d", &horasTrabalhadas);

    printf("Informe o valor recebido por hora: ");
    scanf("%f", &valorHora);

    printf("Informe o numero de filhos: ");
    scanf("%d", &numeroFilhos);

    // Processamento modular
    salarioInicial = calcularSalarioInicial(horasTrabalhadas, valorHora);
    salarioFinal = calcularSalarioFinal(salarioInicial, numeroFilhos);

    // Saída de dados
    exibirResumo(matricula, salarioInicial, salarioFinal);

    return 0;
}