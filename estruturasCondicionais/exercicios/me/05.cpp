#include <stdio.h>

int main(void) {
    float temp = 0;

    printf("digite a temperatura: \n");
    scanf("%f", &temp);

    if (temp > 30){
        printf("Limite de temperatura excedido. Maximo = 30 graus celsius.");
    } 
    else if (temp > 26) {
        printf("Quente.");
    } 
    else if (temp >= 18) {
        printf("Ambiente.");
    }
    else {
        printf("Frio.");
    }

    return 0;
}