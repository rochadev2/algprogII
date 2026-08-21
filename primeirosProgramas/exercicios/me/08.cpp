#include <stdio.h>

int main(void) {
    int num, quoc2, quoc3;

    printf("digite o valor: \n");
    scanf("%d", &num);

    quoc2 = num / 2;
    quoc3 = num / 3;

    printf("quociente de %d por 2 = %d\nquociente de %d por 3 = %d\n", num, quoc2, num, quoc3);

    return 0;
}