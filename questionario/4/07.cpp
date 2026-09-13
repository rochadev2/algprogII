#include <stdio.h>
#include <string.h>

int main() {
    int n, caso = 1;
    
    // Lê enquanto o arquivo possuir entradas válidas e encerra quando n for 0
    while (scanf("%d", &n) == 1 && n != 0) {
        
        // Imprime a quebra de linha entre os casos, protegendo o início e o fim da saída
        if (caso > 1) {
            printf("\n");
        }
        
        // Vetor de frequência para realizar um Counting Sort (limite máximo de 200 m3)
        int consumos[205];
        memset(consumos, 0, sizeof(consumos));
        
        // Uso de long long previne overflow no somatório de até 1 milhão de imóveis
        long long somaX = 0; 
        long long somaY = 0;
        
        // 1. Leitura e agregação dos dados no vetor de frequência
        for (int i = 0; i < n; i++) {
            int x, y;
            scanf("%d %d", &x, &y);
            
            somaX += x;
            somaY += y;
            
            // O enunciado exige o consumo por pessoa arredondado para baixo
            int consumo_por_pessoa = y / x; 
            
            // Acumula a quantidade de moradores que possuem essa mesma média
            consumos[consumo_por_pessoa] += x;
        }
        
        // 2. Impressão do cabeçalho da cidade
        printf("Cidade# %d:\n", caso);
        
        // 3. Impressão dos grupos em ordem ascendente de consumo
        int primeiro = 1;
        for (int i = 0; i <= 200; i++) {
            if (consumos[i] > 0) {
                if (!primeiro) {
                    printf(" "); // Espaço entre os grupos, mas não no início ou no fim
                }
                printf("%d-%d", consumos[i], i);
                primeiro = 0;
            }
        }
        printf("\n");
        
        // 4. Cálculo de média com truncamento perfeito usando Matemática Inteira
        long long int_part = somaY / somaX;
        long long remainder = somaY % somaX;
        long long frac_part = (remainder * 100) / somaX;
        
        // %02lld garante que um decimal como "5" seja impresso como "05"
        printf("Consumo medio: %lld.%02lld m3.\n", int_part, frac_part);
        
        caso++;
    }
    
    return 0;
}