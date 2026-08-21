#include <stdio.h>

/* Recebe um número inteiro e emite uma
   mensagem de acordo com esse número */

int main()
{
    int idade;
    
    printf("Quantos anos voce tem? ");
    scanf("%d", &idade);
    
    if (idade < 30)
        printf("Puxa! Voce eh bem jovem!\n");
    else
        printf("Puxa! Voce ja eh velhinho!\n");
    
    printf("Ate breve!\n");
    return 0;
}