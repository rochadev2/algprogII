#include <stdio.h>

int main() {
    int tam;
    
    if (scanf("%d", &tam) != 1) {
        return 1;
    }
    
    int L[tam];
    
    for (int i = 0; i < tam; i++) {
        scanf("%d", &L[i]);
    }
    
    int maior = 1;
    
    for (int i = 1; i < tam; i++) {
        if (L[i] >= L[0]) {
            maior = 0;
            break;
        }
    }
    
    if (maior) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    
    return 0;
}