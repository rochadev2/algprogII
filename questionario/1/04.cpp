#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double delta, raiz1, raiz2, temp;

    // Leitura dos três coeficientes
    if (scanf("%lf %lf %lf", &a, &b, &c) == 3) {
        
        // Cálculo do discriminante (delta)
        delta = (b * b) - (4 * a * c);

        // Verifica se a equação possui raízes reais
        if (delta < 0) {
            printf("A equação não possui raízes reais\n");
        } else {
            // Cálculo das raízes utilizando a função sqrt()
            raiz1 = (-b - sqrt(delta)) / (2 * a);
            raiz2 = (-b + sqrt(delta)) / (2 * a);

            // Garante que a raiz1 seja sempre a menor para corresponder à ordem dos exemplos
            if (raiz1 > raiz2) {
                temp = raiz1;
                raiz1 = raiz2;
                raiz2 = temp;
            }

            // Imprime as raízes formatadas com duas casas decimais
            printf("%.2lf, %.2lf\n", raiz1, raiz2);
        }
    }

    return 0;
}