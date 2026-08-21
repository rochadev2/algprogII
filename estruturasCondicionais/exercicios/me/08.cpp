#include <stdio.h>

bool verificaParidade(int n) {
    if (n % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main(void) {
    int num;

    printf("Digite o numero: \n");
    scanf("%d", &num);

    if (verificaParidade(num)) {
        printf("O numero %d eh par.\n", num);
    } else {
        printf("O numero %d eh impar.\n", num);
    }

    return 0;
}