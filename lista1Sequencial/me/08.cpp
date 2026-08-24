#include <stdio.h>
#include <math.h>

int ler_inteiro() {
    int num;
    
    printf("digite o inteiro: \n");
    scanf("%d", &num);
    
    return num;
}

double calcular_potencia(int base, int expoente) {
    return pow(base, expoente); 
}


double calcular_raiz_quadrada(double valor) {
    return sqrt(valor); 
}


void mostrar_resultados(double potencia, double raiz) {
    printf("--- Potencia ---\n");
    printf("%.2f\n", potencia);

    printf("--- Raiz ---\n");
    printf("%.2f\n", raiz);
}

int main() {
    int base, expoente;
    double potencia, raiz;

    printf("--- Leitura da Base ---\n");
    base = ler_inteiro();

    printf("--- Leitura do Expoente ---\n");
    expoente = ler_inteiro();

    potencia = calcular_potencia(base, expoente);
    raiz = calcular_raiz_quadrada(potencia);

    mostrar_resultados(potencia, raiz);

    return 0;
}