#include <stdio.h>
#define NUM 25

/* Realiza operações aritméticas com números inteiros */

int main()
{
    int x, y, z, r;
    
    y = 10;
    r = NUM + y;
    printf("A soma de %d e %d eh %d\n", NUM, y, r); //35
    
    x = 38;
    r = x - NUM;
    printf("A subtracao de %d e %d eh %d\n", x, NUM, r); //13
    
    x = 51;
    y = 17;
    r = x * y;
    printf("A multiplicacao de %d por %d eh %d\n", x, y, r); //867
    
    x = 100;
    y = NUM;
    r = x / y;
    printf("O quociente da divisao de %d por %d eh %d\n", x, y, r); //4
    
    x = 17;
    y = 3;
    r = x % y;
    printf("O resto da divisao de %d por %d eh %d\n", x, y, r); //2
    
    x = -7;
    r = -x;
    printf("%d com sinal trocado eh %d\n", x, r); //7
    
    x = 10;
    y = 4;
    z = 15;
    r = x + y * z;
    printf("A expressão %d + %d * %d eh %d\n", x, y, z, r); //70
    
    return 0;
}