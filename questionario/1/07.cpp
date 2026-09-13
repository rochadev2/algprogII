#include <stdio.h>

int main() {
    long long num;
    int d, digito_atual;
    int contagem = 0;

    // Leitura do número principal e do dígito procurado
    if (scanf("%lld %d", &num, &d) == 2) {
        
        // Isola e verifica cada dígito matematicamente até o número ser zerado
        while (num > 0) {
            // Extrai sempre o último dígito da direita
            digito_atual = num % 10; 
            
            // Verifica se o dígito isolado corresponde ao procurado
            if (digito_atual == d) {
                contagem++;
            }
            
            // Remove o último dígito do número inteiro
            num /= 10; 
        }

        // Imprime a quantidade de ocorrências
        printf("%d\n", contagem);
    }

    return 0;
}