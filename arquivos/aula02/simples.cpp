#include <stdio.h> // printf, scanf

/* Recebe um numero inteiro positivo que representa uma idade 
e emite uma mensagem na saida se a idade e inferior a 30 */

int main()
{ 
	int idade;
	printf("Quantos anos voce tem? "); 
	scanf("%d", &idade);
	if (idade < 30)
		printf("Puxa! Voce e bem jovem!\n");
	
	printf("Ate breve!\n"); 
	return 0;
}