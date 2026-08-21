#include<stdio.h>

/* essa linha eh um 
comentario
campo grande*/

// uma unica linha de comentario

/*scanf - leitura de dados do teclado

scanf("tipo de dado", &nome_variavel);

%d - num inteiro
%f - num real do tipo float
%lf - num real do tipo double
%c - um caracter

*/

/*
printf("tipo de dado", nome_variavel);

%d - num inteiro
%f - num do tipo float
%f - num do tipo double
%c - um caracter
*/

int main()
{
	int num;
	float num1;
	double num2;
	char caracter;

	printf("Leitura de um numero inteiro:");
	scanf("%d", &num);						// %d
	printf("\nLeitura de um numero float:");
	scanf("%f", &num1);						// %f
	printf("\nLeitura de um numero double:");
	scanf("%lf", &num2);					// %lf
	//printf("\nLeitura de um caracter:");
	scanf(" %c", &caracter);					// %c

	printf("\nInteiro: %d \nFloat: %f \nDouble: %f \nCaracter: %c\n", num, num1, num2, caracter);

	/*Imprimindo o inteiro*/
	printf("Imprimindo o inteiro");
	printf("\n%d", num);
	printf("\n%02d", num);
	printf("\n%+10d", num);
	printf("\n%010d", num);
	printf("\n");

	/*Imprimindo o numero real*/
	printf("Imprimindo o numero real");
	printf("\n%f", num1);
	printf("\n%10.1f", num1);
	printf("\n%010.2f", num1);
	printf("\n");






	return 0;
}
