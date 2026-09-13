#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Função recursiva com o protótipo exato exigido
bool palindromo(char palavra[], int inicio, int fim) {
    // Condição de parada (caso base): os índices se igualaram ou se cruzaram no meio
    if (inicio >= fim) {
        return true;
    }
    
    // Verifica se os caracteres nas extremidades opostas atuais são diferentes
    if (palavra[inicio] != palavra[fim]) {
        return false;
    }
    
    // Passo recursivo: avança o índice de início e recua o índice de fim
    return palindromo(palavra, inicio + 1, fim - 1);
}

int main() {
    char palavra[200];

    // Leitura da palavra
    if (scanf("%s", palavra) == 1) {
        
        // O tamanho da string define a posição do último caractere válido
        int fim = strlen(palavra) - 1;
        
        // Aciona a função recursiva repassando a string, o índice inicial (0) e o final
        if (palindromo(palavra, 0, fim)) {
            printf("É um palíndromo.\n");
        } else {
            printf("Não é um palíndromo.\n");
        }
    }

    return 0;
}