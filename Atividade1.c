#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main()
{
	setlocale(LC_ALL, "Portuguese");
	int indice = 13, soma = 0, k=0; 
	if (k<indice){
		k++;
		soma =+ k;
	}
	printf("A soma é: ", soma); 
}
