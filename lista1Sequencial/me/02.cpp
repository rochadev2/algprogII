#include <stdio.h>

int main(void) {
    float n1, n2, n3, p1, p2, p3, mediaAritmetica;

    printf("Digite as tres notas: \n");
    scanf("%f %f %f", &n1, &n2, &n3);

    printf("Digite os tres pesos: \n");
    scanf("%f %f %f", &p1, &p2, &p3);

    mediaAritmetica = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);

    printf("media aritmetica = %.2f\n", mediaAritmetica);

    return 0;
}