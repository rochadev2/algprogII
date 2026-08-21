#include <stdio.h>

/* Recebe dois números inteiros x e y e coloca o menor desses
   valores em x e o maior em y, mostrando o resultado na saída */

int main()
{
    int x, y, aux;
    
    printf("Informe o valor de x: ");
    scanf("%d", &x);
    printf("Informe o valor de y: ");
    scanf("%d", &y);
    
    if (x > y) {
        aux = x;
        x = y;
        y = aux;
    }
    
    printf("%d eh menor ou igual a %d\n", x, y);
    return 0;
}