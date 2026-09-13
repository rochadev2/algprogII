#include <stdio.h>

// Função com a assinatura exata exigida na especificação
double calcSalario(double valorhora, int numHoras) {
    if (numHoras <= 40) {
        return valorhora * numHoras;
    } else {
        // Paga as primeiras 40 horas normalmente e o excedente com multiplicador de 1.5
        return (40 * valorhora) + ((numHoras - 40) * (valorhora * 1.5));
    }
}

int main() {
    int numFuncionario, numHoras;
    double valorHora, salarioFinal;

    // Leitura: número do funcionário, valor pago por hora e número de horas trabalhadas
    if (scanf("%d %lf %d", &numFuncionario, &valorHora, &numHoras) == 3) {
        
        // Chamada da função para computar o salário
        salarioFinal = calcSalario(valorHora, numHoras);
        
        // Impressão formatada: número do funcionário, horas, valor da hora e salário (com duas casas decimais)
        printf("%d %d %.2lf %.2lf\n", numFuncionario, numHoras, valorHora, salarioFinal);
    }

    return 0;
}