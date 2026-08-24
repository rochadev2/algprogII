#include <stdio.h>
#include <stdbool.h> // Biblioteca necessária para usar o 'bool', 'true' e 'false'

int lerAno() {
    int anoDigitado;
    printf("Digite o ano: ");
    scanf("%d", &anoDigitado);
    return anoDigitado;
}

// Função ajustada para retornar true (válido) ou false (inválido)
bool validar_idade(int anoNascimento, int anoAtual) {
    if (anoAtual >= anoNascimento) { // >= permite que a idade seja 0 (nasceu no ano atual)
        return true; 
    } else {
        return false;
    }
}

int calcularIdadeAtual(int anoNascimento, int anoAtual) {
    return anoAtual - anoNascimento; 
}

int calcularIdadeEm2034(int anoNascimento) {
    return 2034 - anoNascimento; 
}

void mostrarResultados(int idadeAtual, int idade2034) {
    printf("\nIdade atual: %d anos.\n", idadeAtual);
    printf("Idade em 2034: %d anos.\n", idade2034);
}

int main() {
    int anoNascimento, anoAtual;
    int idadeAtual, idade2034;

    printf("--- Ano de Nascimento ---\n");
    anoNascimento = lerAno();
    
    printf("--- Ano Atual ---\n");
    anoAtual = lerAno();

    // 1. Primeiro validamos! Só entramos no IF se a validação for verdadeira (true)
    if (validar_idade(anoNascimento, anoAtual) == true) {
        
        // 2. Só calculamos se os dados estiverem corretos
        idadeAtual = calcularIdadeAtual(anoNascimento, anoAtual);
        idade2034 = calcularIdadeEm2034(anoNascimento);
        
        // 3. Mostramos os resultados
        mostrarResultados(idadeAtual, idade2034);
        
    } else {
        // Se a validação retornar false, cai aqui:
        printf("\nEntrada invalida! O ano de nascimento nao pode ser maior que o ano atual.\n");
    }
    
    return 0;
}