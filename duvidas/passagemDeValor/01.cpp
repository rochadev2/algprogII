#include <stdio.h>

// 1. Passagem por Valor
// A função recebe apenas cópias dos números originais
void modificarPorValor(int a) {
    a = a + 50; 
    printf("Dentro da funcao porValor: a = %d\n", a);
}

// 2. Passagem por Referência
// A função recebe um ponteiro, que guardará o endereço de memória da variável original
void modificarPorReferencia(int *a) {
    *a = *a + 50; 
    printf("Dentro da funcao porReferencia: *a = %d\n", *a);
}

int main() {
    int numero1 = 10;
    int numero2 = 10;

    printf("--- PASSAGEM POR VALOR ---\n");
    printf("Valor original de numero1: %d\n", numero1);
    
    modificarPorValor(numero1); // Passa apenas o valor (10)
    
    printf("Valor de numero1 apos a funcao: %d\n\n", numero1);

    printf("--- PASSAGEM POR REFERENCIA ---\n");
    printf("Valor original de numero2: %d\n", numero2);
    
    // O operador & obtem o endereco da variavel para passa-la por referencia
    modificarPorReferencia(&numero2); 
    
    printf("Valor de numero2 apos a funcao: %d\n", numero2);

    return 0;
}