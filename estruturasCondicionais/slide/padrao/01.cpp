#include <stdio.h>

/* Recebe um número inteiro positivo que representa uma idade
   e emite uma mensagem na saída se a idade é inferior a 30 */

int main()
{
    int idade;
    
    printf("Quantos anos voce tem? ");
    scanf("%d", &idade);
    
    if (idade < 30)
        printf("Puxa! Voce eh bem jovem!\n");
    
    printf("Ate breve!\n");
    return 0;
}