/***************************
LER UMA IDADE E MOSTRAR A MENSAGEM DE ACORDO COM:
* IDADE ATÉ 12 ANOS --> CRIANÇA
* IDADE ACIMA DE 12 ATÉ 17 ANOS(INCLUSIVE)--> ADOLESCENTE
* IDADE A PARTIR DE 18 ANOS --> ADULTO
*********************/

/*ESTRUTURA CONDICIONAL 
if 
else if
else*/

/*
 if (CONDICAO)
 {
    
 }
 else if(){
	
 }
 else if()
 else if()
 else	
 */

  

#include <stdio.h>

int main()
{
	int idade;

	scanf("%d", &idade);
   	

	if(idade <= 12)
	{
		printf("\nCrianca");
	}
	else if(idade > 12 && idade <= 17)
	{
		printf("\nAdolescente");
	}
	else 
	{
		printf("\nAdulto");
	}

   	printf("\n");
	return 0; 
}