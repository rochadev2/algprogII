#include <stdio.h>

int main() {
    // Inicialização baseada na imagem
    int i = 2;
    int *p = &i; // p recebe o endereço de i (equivalente à posição 5D)

    printf("--- VALORES DE REFERENCIA ---\n");
    printf("Valor de i: %d\n", i);
    printf("Endereco de i (&i): %p\n", (void*)&i);
    printf("Endereco guardado em p: %p\n", (void*)p);
    printf("Endereco do ponteiro p (&p): %p\n\n", (void*)&p);

    printf("--- DEMONSTRACAO DOS CASOS ---\n");

    // (a) *p: Acessa o objeto para o qual o ponteiro aponta
    printf("(a) *p  = %d (Apelido para i)\n", *p);

    // (b) &p: Retorna o endereco de memoria onde o ponteiro p esta guardado
    printf("(b) &p  = %p\n", (void*)&p);

    // (c) *&p: Retorna o proprio conteudo da variavel p (o endereco de i)
    printf("(c) *&p = %p\n", (void*)*&p);

    // (d) &*p: Resolve *p (variavel i) e depois obtem seu endereco (&i)
    printf("(d) &*p = %p\n", (void*)&*p);

    // (e) *i: EXPRESSAO INVALIDA
    // printf("(e) *i = %d\n", *i); 
    // ERRO: O operador * exige um endereco de memoria, mas 'i' e apenas um inteiro (2).

    // (f) &i: Retorna o endereco da variavel i na memoria
    printf("(f) &i  = %p\n", (void*)&i);

    // (g) *&i: Obtem o endereco e depois acessa o valor (uma operacao anula a outra)
    printf("(g) *&i = %d (Apelido para i)\n", *&i);

    // (h) &*i: EXPRESSAO INVALIDA
    // printf("(h) &*i = %p\n", (void*)&*i);
    // ERRO: Tenta aplicar o operador de indirecao (*) no inteiro 'i' logo no primeiro passo.

    return 0;
}