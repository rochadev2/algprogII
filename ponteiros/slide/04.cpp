#include <stdio.h>

int main() {
    int i = 2;
    int auxiliar = 99; // Variável extra para q ter um alvo válido
    
    int *p;             // Ponteiro p declarado, mas não inicializado
    int *q = &auxiliar; // q inicializado com o endereço da variável auxiliar

    printf("--- ESTADO INICIAL ---\n");
    printf("Valor de i: %d\n", i);
    printf("Valor apontado por q (*q): %d\n\n", *q);

    printf("--- ATRIBUICOES VALIDAS ---\n");

    // (f) p = q;
    p = q; 
    printf("(f) Apos p = q;   -> p aponta para o mesmo local que q (*p = %d)\n", *p);

    // (e) p = *&q;
    p = NULL; // Resetando p para demonstrar a proxima operacao
    p = *&q;
    printf("(e) Apos p = *&q; -> p aponta para o mesmo local que q (*p = %d)\n", *p);

    // (i) *p = *q;
    p = &i;  // p precisa apontar para um local valido (i) para receber um valor
    *p = *q; // Copia o valor 99 para dentro da variavel i
    printf("(i) Apos *p = *q; -> O valor de i foi alterado para: %d\n\n", i);


    printf("--- ATRIBUICOES INVALIDAS (COMENTADAS) ---\n");
    
    /*
    // (a) p = i;
    // ERRO: 'p' espera um endereco de memoria, mas 'i' e um valor inteiro simples.

    // (b) *p = &i;
    // ERRO: '*p' acessa o espaco de um inteiro, mas '&i' e um endereco de memoria.

    // (c) &p = q;
    // ERRO: O endereco fisico de 'p' (&p) e fixo na memoria pelo sistema e nao pode ser sobrescrito.

    // (d) p = &q;
    // ERRO: Niveis de apontamento incompativeis. '&q' e um ponteiro para ponteiro (int **).

    // (g) p = *q;
    // ERRO: '*q' resulta no valor inteiro 99, mas 'p' exige um endereco de memoria.

    // (h) *p = q;
    // ERRO: 'q' guarda um endereco, mas '*p' e o espaco para armazenar um numero inteiro.
    */

    return 0;
}