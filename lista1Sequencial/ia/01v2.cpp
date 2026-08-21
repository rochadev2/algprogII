#include <stdio.h>

// Definição da estrutura que encapsula os dados do funcionário
typedef struct {
    int matricula;
    int horasTrabalhadas;
    int numeroFilhos;
    float valorHora;
    float salarioInicial;
    float salarioFinal;
} Funcionario;

// Calcula o salário base
float calcularSalarioInicial(int horas, float valorHora) {
    return horas * valorHora;
}

// Calcula o salário final aplicando o bônus de 10% por dependente
float calcularSalarioFinal(float salarioInicial, int numeroFilhos) {
    const float PERCENTUAL_POR_FILHO = 0.10f;
    return salarioInicial + (numeroFilhos * (PERCENTUAL_POR_FILHO * salarioInicial));
}

// Processa e atualiza os cálculos diretamente no registro do funcionário
void processarFolhaPagamento(Funcionario *f) {
    f->salarioInicial = calcularSalarioInicial(f->horasTrabalhadas, f->valorHora);
    f->salarioFinal = calcularSalarioFinal(f->salarioInicial, f->numeroFilhos);
}

// Exibe o relatório formatado (passagem por ponteiro constante para economia de memória)
void exibirResumo(const Funcionario *f) {
    printf("\n==============================\n");
    printf("     RESUMO DE PAGAMENTO      \n");
    printf("==============================\n");
    printf("Matricula:          %d\n", f->matricula);
    printf("Horas Trabalhadas:  %d h\n", f->horasTrabalhadas);
    printf("Valor por Hora:     R$ %.2f\n", f->valorHora);
    printf("Filhos Cadastrados: %d\n", f->numeroFilhos);
    printf("------------------------------\n");
    printf("Salario Base:       R$ %.2f\n", f->salarioInicial);
    printf("Salario Final:      R$ %.2f\n", f->salarioFinal);
    printf("==============================\n");
}

int main(void) {
    Funcionario func;

    // Entrada de dados
    printf("Informe a matricula: ");
    scanf("%d", &func.matricula);

    printf("Informe as horas trabalhadas: ");
    scanf("%d", &func.horasTrabalhadas);

    printf("Informe o valor por hora: ");
    scanf("%f", &func.valorHora);

    printf("Informe o numero de filhos: ");
    scanf("%d", &func.numeroFilhos);

    // Processamento
    processarFolhaPagamento(&func);

    // Saída
    exibirResumo(&func);

    return 0;
}