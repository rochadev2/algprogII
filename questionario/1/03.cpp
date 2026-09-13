#include <stdio.h>
#include <ctype.h>

int main() {
    double saldo, valor;
    char operacao;

    // A leitura com espaço antes do %c ignora eventuais quebras de linha ou espaços vazios deixados no buffer
    if (scanf("%lf %c %lf", &saldo, &operacao, &valor) == 3) {
        
        // Converte o caractere da operação para maiúsculo
        operacao = toupper(operacao);

        // Aplica a operação correspondente ao saldo
        if (operacao == 'D') {
            saldo += valor;
        } else if (operacao == 'S') {
            saldo -= valor;
        }
        // Códigos inválidos são naturalmente ignorados, mantendo o saldo original

        // Imprime o resultado final utilizando a formatação exigida
        printf("Saldo atual: R$ %+10.2f\n", saldo);
    }

    return 0;
}